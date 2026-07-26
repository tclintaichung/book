import promptSync from 'prompt-sync';
const prompt = promptSync();

function main() {
  let price = 0;
  let money = 0;
  let changes = 0;
  let i = 0;
  const changeType = [500, 100, 50, 10, 5, 1];
  let changeNo = [0, 0, 0, 0, 0, 0];

  money = parseInt(prompt("Enter the money you have: "));
  price = parseInt(prompt("Enter the price of item: "));
  money = money - price;

  while (money > 0) {
    changeNo[i] = Math.floor(money / changeType[i]);
    changes += changeNo[i];
    money = money % changeType[i];
    i++;
  }
  let changeStr = "";
  console.log("Total changes: " + String(changes));
  changeStr = "They are: 500(" + String(changeNo[0]) + ");100(" + String(changeNo[1]) + ");50(";
  changeStr +=  String(changeNo[2]) + ");10(";
  changeStr +=  String(changeNo[3]) + ");5(";
  changeStr +=  String(changeNo[4]) + ");1(";
  changeStr +=  String(changeNo[5]) + ")";
  console.log(changeStr);
  return 0;
}
main();