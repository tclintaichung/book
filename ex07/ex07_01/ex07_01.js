import promptSync from 'prompt-sync';
const prompt = promptSync();
import fs from 'fs';

function main() {
  const fileName = "../data/ex07_01.txt";
  let text = "";
  let line = "";
  console.log("Enter information: "); 
  while(1) {
    line = prompt();
    if (line === "") break;
    text += line + "\n";
  }
  fs.writeFile(fileName, text, 'utf8', (err) => { 
    if (err) { 
      console.error('Error writing file:', err); 
      return; 
    } 
    console.log(`Data saved to ${fileName}`); 
  });
}
main();