import promptSync from 'prompt-sync';
const prompt = promptSync();

function main() {
  const myScores = new Map([
    [1, 6.17], [2, 12.33], [3, 18.50],
    [4, 24.67], [5, 30.84], [6, 37.00], [7, 43.17],
    [8, 49.34], [9, 55.51], [10, 61.67], [11, 67.84],
    [12, 74.01], [13, 80.18], [14, 86.34], [15, 100.0]]);
  do {
    let score = Number(prompt("Enter your score: "));
    if (score < 0) break;
    if (score <= 0) {
      console.log("Your score is in Level 0");
      continue;
    }
    // for ( let [key, value] of myScores) {
    //   if (score <= value) {
    //     console.log(`Your score is in Level ${key}`);
    //     break;
    //   } 
    // }
    for (let item of myScores.entries()) {
      if (score <= item[1]) {
        console.log(`Your score is in Level ${item[0]}`);
        break;
      }
    }
  } while (true);
  return 0;
}
main();