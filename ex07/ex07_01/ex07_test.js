import promptSync from 'prompt-sync';
const prompt = promptSync();
import fs from 'fs';

function main() {
    let filename = "../data/ex07_01.txt";
    let text = "";
    let line = "";
    while(1) {
        line = prompt("Enter information: ");
        if (line === "") {
            console.log(`"Data saved to ${filename}`);
            break;
        }
        text += line + "\n";
    }
    fs.writeFile(filename, text, 'utf8', (err) => { 
        if (err) { 
            console.error('Error writing file:', err); 
            return; 
        } 
        console.log('Done writing!'); 
    });
}
main();
