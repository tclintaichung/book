import promptSync from 'prompt-sync';
const prompt = promptSync();

function main() {
  let name = null;
  let luckyNumber = null;

  name = prompt("Enter your name: ");
  luckyNumber = Number(prompt("Enter your lucky number: "));
  console.log(name + ": Your lucky number is " + String(luckyNumber));
  return 0;
}
main();