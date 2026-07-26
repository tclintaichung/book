const matrix = [
  "chinese12345",
  "english12345",
  "mathematics1",
  "history12345",
  "physics12345"
];

function main() {
  let items = [matrix[0][Math.floor(Math.random() * matrix[0].length)], 
               matrix[1][Math.floor(Math.random() * matrix[1].length)],
               matrix[2][Math.floor(Math.random() * matrix[2].length)],
               matrix[3][Math.floor(Math.random() * matrix[3].length)],
               matrix[4][Math.floor(Math.random() * matrix[4].length)]
  ]; 
  let password = items.join('');
  console.log("The Password: " + password);
}

main();