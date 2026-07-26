import promptSync from 'prompt-sync';
const prompt = promptSync();
import { isLeapYear } from './src/leap.js';

function main() {
  let year = 0;

  do {
    year = prompt("Enter year: ");
    if (year < 0) {
      console.log("Invalid year. Exiting.");
      break;
    }
    if (isLeapYear(year)) {
      console.log(`Year ${year} is a leap year.`);
    } else {
      console.log(`Year ${year} is a common year.`);
    }
  } while (true);
  return 0;
}
main();