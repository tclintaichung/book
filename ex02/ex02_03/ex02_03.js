let globalNum = 100;

function printNums() {
  let functionNum = 200;
  console.log("Integer in global: " + String(globalNum));
  console.log("Integer in function: " + String(functionNum));
}

function main() {
  console.log("Initial Integer in global: " + String(globalNum));
  globalNum = 101; 
  printNums();
  {
    let blockNum = 300;
    console.log("Integer in block: " + String(blockNum));
  }
  // blockNum = 301;
  let functionNum = 102;
  return 0;
}

main();