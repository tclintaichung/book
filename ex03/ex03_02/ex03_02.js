import promptSync from 'prompt-sync';
const prompt = promptSync();

function main() {
  let x = 0;
  let y = 0;

  x = parseInt(prompt("Enter x: "));
  y = parseInt(prompt("Enter y: "));

  console.log(String(x) + " is greater than " +  String(y) + " is " + String(x > y));
  console.log(String(x) + " is less than " +  String(y) + " is " + String(x < y));
  console.log(String(x) + " is equal to " +  String(y) + " is " + String(x == y));

  return 0;
}

main();