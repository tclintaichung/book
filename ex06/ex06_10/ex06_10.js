import promptSync from 'prompt-sync';
const prompt = promptSync();
function add(arr) {
  arr[0] += arr[1]; 
}
function multiply(arr) {
  arr[0] *= arr[1];
}
function main() {
  let a = [];
  let b = [];
  a[0] = Number(prompt(" a = "));
  a[1] = Number(prompt(" b = "));
  b = a.slice();
  let strResult = String(a[0]) + " + " + String(a[1]) + " = ";
  add(a);
  strResult += String(a[0]);
  console.log(strResult);
  strResult = String(b[0]) + " * " + String(b[1]) + " = ";
  multiply(b);
  strResult += String(b[0]);
  console.log(strResult);
  return 0;
}
main();