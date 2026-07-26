import fs from 'fs';

function main() {
  const fileName = "../data/ex07_03.txt";
  fs.readFile(fileName, (err, data) => {
    if (err) {
      console.log("Cannot open file " + fileName);
      return 1;
    }  
    let sum = 0;
    let lines = data.toString().split('\n');
    let dataSize = lines.shift();
    lines.forEach(line => {
      if (line.trim() === '') return;
      sum += Number(line);
    });
    console.log("Average:", (sum / Number(dataSize)).toFixed(2));
  });
  return 0;
}
main();