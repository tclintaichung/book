import fs from 'fs'
import promptSync from 'prompt-sync';
const prompt = promptSync();
const fileName = "../data/ex07_03.txt";
const upper = 100;
const lower = 60;
let data = [];

function main() {
  const dataSize = parseInt(prompt("Enter data size: "));
  if (isNaN(dataSize) || dataSize <= 0) {
    console.error("Invalid data size.");
    process.exit(1);
  }
  data.push(dataSize);
  for (let i = 0; i < dataSize; i++) {
    data.push(Math.floor(Math.random() * (upper - lower + 1)) + lower);
  }
  fs.writeFile(fileName, data.join('\n'), 'utf8', (err) => { 
      if (err) { 
        console.error('Error writing file:', err); 
        return; 
      }
  });
}
main();