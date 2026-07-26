import promptSync from 'prompt-sync';
const prompt = promptSync();

function main() {
  let year = 0;

  console.log("Enter year: ");
  year = parseInt(prompt());
  if (year < 0) {
    console.log("Invalid year. Exiting.");
    return 1;
  }
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    console.log("Year " + year + " is a leap year.");
  } 
  else {
     console.log("Year " + year + " is a common year.");
  }
  return 0;
}
main();