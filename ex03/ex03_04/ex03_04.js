import promptSync from 'prompt-sync';
const prompt = promptSync();

function main() {
  let x = 0;
  let newX = 0;
  let shift = 0;

  x = parseInt(prompt("Enter x: "));
  shift = parseInt(prompt("Enter number of digit to shift: "));

  newX = x >> shift;
  console.log(String(newX) + " is right shift " + String(shift) + " digits of " + String(x));
  newX = x << shift;
  console.log(String(newX) + " is left shift " + String(shift) + " digits of " + String(x));

  return 0;
}

main();