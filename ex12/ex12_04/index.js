import dayjs from "https://unpkg.com/dayjs@1.11.10/esm/index.js";

const keys = ["js-0", "js-1", "js-2", "js-3", "js-4",
              "js-5", "js-6", "js-7", "js-8", "js-9",
              "js-+", "js--", "js-*", "js-/", "js-.",
              "js-="
];
let cmds = "";
const output = document.querySelector("#result");
keys.forEach((key) => {
  const cmd = key.substring(3, 4);
  if (cmd === "=") {
    document.getElementById(key).addEventListener("click",() => compute());
  } else {
    document.getElementById(key).addEventListener("click",() => inputKeys(cmd));
  }
});
const day = dayjs().format("HH:mm:ss - dddd, MM/DD");
document.querySelector("#day").innerHTML = day;

function resetColor() {
  keys.forEach((key) => {
    document.getElementById(key).classList.remove("color-onclick");
  });
}
function changeColor(cmd) {
  keys.forEach((key) => {
    if (key.substring(3, 4) === cmd) {
      document.getElementById(key).classList.add("color-onclick");
    }
  });
}
function inputKeys(cmd) {
  resetColor();
  changeColor(cmd);
  cmds += cmd;
  result.innerHTML = cmds;
}
function compute() {
  resetColor();
  document.getElementById("js-=").classList.add("color-onclick");
  output.innerHTML = cmds;
  getResult();
  cmds = "";
}
function getNumbers(operatorList) {
  let nums = [];
  let previousIndex = 0;
  let operand = undefined;
  operatorList.forEach((oper, index) => {
    operand = cmds.slice(previousIndex, oper.index);
    nums.push(Number(operand));
    previousIndex = oper.index + 1;
  });
  operand = cmds.slice(previousIndex, cmds.length);
  nums.push(Number(operand));
  return nums;
}
function getOperators() {
  const operatorList = [];
  for (let i = 0; i < cmds.length; i++) {
    if (cmds[i] === "+" || cmds[i] === "-" || cmds[i] === "*" || cmds[i] === "/") {
      const oper = {
        operator: cmds[i],
        index: i,
      };
      operatorList.push(oper);
    }
  }
  return operatorList;
}
function getResult() {
  const operatorList = getOperators();
  const nums = getNumbers(operatorList);
  while (operatorList.find((oper) => oper.operator === '/' || oper.operator === '*')) {
    for (let i = 0; i < operatorList.length; i++) {
      if (operatorList[i].operator === "*") {
        let newNum = nums[i] * nums[i + 1];
        nums[i] = newNum;
        nums.splice(i + 1, 1);
        operatorList.splice(i, 1);
        break;
      } else if (operatorList[i].operator === "/") {
        let newNum = nums[i] / nums[i + 1];
        nums[i] = newNum;
        nums.splice(i + 1, 1);
        operatorList.splice(i, 1);
        break;
      }
    }  
  }
  let result = nums[0];
  for (let i = 0; i < operatorList.length; i++) {
    if (operatorList[i].operator === "+") {
      result += nums[i + 1];
    } else if (operatorList[i].operator === "-") {
      result -= nums[i + 1];
    }
  }
  if (result !== undefined) output.innerHTML = cmds + "=" + result.toFixed(2);
}