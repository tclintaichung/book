import promptSync from 'prompt-sync';
const prompt = promptSync();

function main() {
  let x = 0;
  let y = 0;

  x = parseInt(prompt("Enter x: "));
  y = parseInt(prompt("Enter y: "));

  console.log("x + y = " + String(x + y));
  console.log("x - y = " + String(x - y));
  console.log("x * y = " + String(x * y));
  console.log("x / y = " + String(x / y));
  console.log("x % y = " + String(x % y));
  
  return 0;
}

main();