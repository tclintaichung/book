function sequence(x, start, end) {
  for (let i = start; i <= end; i++) {
    x.push(i);
  }
}
function odd(x) {
  return x % 2 === 1;
}
function sum(a, b) {
  return a + b;
}
function main() {
  let x = [];
  sequence(x, 1, 39);
  x = x.filter(odd);
  let sumSeries = x.reduce(sum, 0);
  console.log(sumSeries);
}
main();