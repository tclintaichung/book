function main() {
  const temp = [26.5, 27.1, 21.0, 29.4, 25.5, 28.8];
  let average = 0.0;
  let sum = 0.0;
  let sigma = 0.0;
  let size = temp.length;
  for (let i = 0; i < size; i++) {
    sum += temp[i];
  }
  average = sum / size;
  for (let i = 0; i < size; i++) {
    sigma += Math.pow(temp[i] - average, 2);
  }
  sigma = sigma / (size - 1);
  sigma = Math.sqrt(sigma);
  console.log("The average of temperatures: " + String(average.toFixed(2)));
  console.log("The standard deviation: " + String(sigma.toFixed(2)));
  return 0;
}
main();