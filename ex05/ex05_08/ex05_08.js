import promptSync from 'prompt-sync';
const prompt = promptSync();

let data_size = 0;
const upper = 100;
const lower = 0;
let data = [];

async function main() {
  data_size = parseInt(prompt("Enter data size: "));
  if (isNaN(data_size) || data_size <= 0) {
      console.error("Invalid data size.");
      process.exit(1);
  }
  for (let i = 0; i < data_size; i++) {
      data.push(Math.floor(Math.random() * (upper - lower + 1)) + lower);
  }

  for (let i = 0; i < data_size; i++) {
    console.log(String(i+1) + ": " + String(data[i]));
  }
}
main();