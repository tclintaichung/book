import promptSync from 'prompt-sync';
const prompt = promptSync();

function main() {
  let x = 0;
  const low = 11;
  const up = 20;
  let condition1 = false;
  let condition2 = false;
  let condition3 = false;

  x = parseInt(prompt("Enter x: "));

  condition1 = (x >= low) && (x <= up);
  condition2 = (x < low) || (x > up);
  condition3 = !(x >= up);

  console.log(String(x) + " is within [" + String(low) + ", " + String(up) + "]: " + condition1);
  console.log(String(x) + " is outside [" + String(low) + ", " + String(up) + "]: " + condition2);
  console.log(String(x) + " is less than " + String(up) + ": " + condition3);
 
  return 0;
}
main();