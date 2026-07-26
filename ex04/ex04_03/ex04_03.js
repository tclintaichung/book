import promptSync from 'prompt-sync';
const prompt = promptSync();

function main() {
  let oper = null;
  let num1 = 0;
  let num2 = 0;
  oper = prompt("Enter +, -, *, /, %: ");
  num1 = parseFloat(prompt("Enter number 1: "));
  num2 = parseFloat(prompt("Enter number 2: "));
  switch (oper) {
    case '+':
      console.log(`${num1} + ${num2} = ${num1 + num2}`);
      break;
    case '-':
      console.log(`${num1} - ${num2} = ${num1 - num2}`);
      break;
    case '*':
      console.log(`${num1} * ${num2} = ${num1 * num2}`);
      break;
    case '/':
      console.log(`${num1} / ${num2} = ${num1 / num2}`);
      break;
    case '%':
      console.log(`${num1} % ${num2} = ${Math.floor(num1) % Math.floor(num2)}`);
      break;
    default:
      console.log("No operation is performed");
  }
  return 0;
}
main();