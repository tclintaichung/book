import promptSync from 'prompt-sync';
const prompt = promptSync();

function main() {
  let x = 0;
  let y = 0;
  let newXY = 0;

  x = parseInt(prompt("Enter x: "));
  y = parseInt(prompt("Enter y: "));
  newXY = x & y;
  console.log(String(x) + " & " + String(y) + " = " + String(newXY));

  newXY = x | y;
  console.log(String(x) + " | " + String(y) + " = " + String(newXY));
  newXY = x ^ y;
  console.log(String(x) + " ^ " + String(y) + " = " + String(newXY));
  return 0;
}

main();