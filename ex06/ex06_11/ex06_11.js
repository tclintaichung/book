function main() {
  const scores = [65, 78, 90, 45, 66, 95, 100, 25, 39, 88];
  let scoresTemp = [];

  let strScores = "Original scores: "
  for (let score of scores) {
    strScores += String(score) + " ";
  };
  console.log(strScores);
  strScores = "Scores between 50 to 70: ";
  scoresTemp = scores.filter((score) => {
    return score >= 50 && score <= 70;
  }) 
  for (let score of scoresTemp) {
    strScores += String(score) + " ";
  };
  console.log(strScores);
  strScores = "Scores above 70: ";
  scoresTemp = scores.filter((score) => {
    return score > 70;
  }) 
  for (let score of scoresTemp) {
    strScores += String(score) + " ";
  };
  console.log(strScores);
  strScores = "Scores after adjusting: ";
  scoresTemp = scores.map((score) => {
    return Math.round(Math.sqrt(score)*10);
  }) 
  for (let score of scoresTemp) {
    strScores += String(score) + " ";
  };
  console.log(strScores);
}
main();