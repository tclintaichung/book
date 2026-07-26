import fs from 'fs';
function main() { 
  const filename = "../data/ex07_01.txt";
  fs.readFile(filename, (err, data) => {
    if (err) {
      console.log(`Cannot open file ${filename}`);
      return 1;
    }
    console.log(data.toString());
  });
  return 0;
}
main();