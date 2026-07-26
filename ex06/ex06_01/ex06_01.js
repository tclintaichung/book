import promptSync from 'prompt-sync';
const prompt = promptSync();

const SCORE_GRID = [
    0.0, 6.17, 12.33, 18.50, 
    24.67, 30.84, 37.00, 43.17, 
    49.34, 55.51, 61.67, 67.84, 
    74.01, 80.18, 86.34, 100.00
];
function getRank(score) {
  let rankValue = -1;
    for (const [index, element] of SCORE_GRID.entries()) {
      if (score <= element) {
        rankValue = index;
        break;
      }
    }
  return rankValue;
}
function main() {
  let rankValue = -1;
  do {
    console.log("Enter your score: ");
    let score = parseFloat(prompt());
    if (score < 0 || score > 100) {
      console.log("Invalid score. Exiting.");
      break;
    }
    rankValue = getRank(score); 
    if (rankValue != -1) {
      console.log("Your rank: " + rankValue);
    } else {
      console.log("Error determining rank.");
    }
  } while (true); 
  return 0;
}
main();