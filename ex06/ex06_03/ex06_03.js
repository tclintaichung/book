import promptSync from 'prompt-sync';
const prompt = promptSync();

function lineEq(p1, p2) {
  let m = 0.0;
  if (p2.x - p1.x != 0) {
    m = (p2.y - p1.y) / (p2.x - p1.x);
  } else {
    console.log(`Line equation: x = ${p1.x.toFixed(3)}`);
    return;
  }
  let b = p1.y - m * p1.x;
  if (b < 0) {
    console.log(`Line equation: y = ${m.toFixed(3)}x - ${-b.toFixed(3)}`);
  }
  else if (b == 0) {
    console.log(`Line equation: y = ${m.toFixed(3)}x`);
  } 
  else if (m == 0) {
    console.log(`Line equation: y = ${b.toFixed(3)}`);
  } 
  else {
    console.log(`Line equation: y = ${m.toFixed(3)}x + ${b.toFixed(3)}`);
  }
} 

function main() {
  let p1 = {}, p2 = {};
  let ch = '';
  try { 
    do {
      console.log("Enter point 1 x: ");
      p1.x = parseInt(prompt());
      console.log("Enter point 1 y: ");
      p1.y = parseInt(prompt());
      console.log("Enter point 2 x: ");
      p2.x = parseInt(prompt());
      console.log("Enter point 2 y: ");
      p2.y = parseInt(prompt());
      if (isNaN(p1.x) || isNaN(p1.y) || isNaN(p2.x) || isNaN(p2.y)) {
        throw new Error("Invalid input. Please enter numeric values.");
      }
      lineEq(p1, p2);
      console.log("Continue? (y/n): ");
      ch = prompt();
      if (ch === 'n') break;
    } while (true);
  } catch (error) {
    console.error(`Error: ${error.message}`);
  }
}
main();