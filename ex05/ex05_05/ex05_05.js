import promptSync from 'prompt-sync';
const prompt = promptSync();

let daysMonth = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
const MONTH_NAMES = [ 
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
];

function main() {
  let month = 0;
  let dayWeek = 0;
  let day = 1;
  let year = 0;
  console.log("Enter year: ");
  year = parseInt(prompt());
  if (year < 0) {
    console.log("Invalid year. Exiting.");
    return 1;
  }
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    daysMonth[1] = 29;
  }
  console.log("Enter month (1-12): ");
  month = parseInt(prompt());
  console.log("What day is the first day of the month (Sunday-0, Saturday-6): ");
  dayWeek = parseInt(prompt());
  if (month < 1 || month > 12) {
    console.log("Invalid month. Exiting.");
    return 1;
  }
  if (dayWeek < 0 || dayWeek > 6) {
    console.log("Invalid day. Exiting.");
    return 1;
  }
  console.log("Calendar for " + MONTH_NAMES[month - 1] + ":");
  console.log("*****************************************************");
  console.log(" Sun\t Mon\t Tue\t Wed\t Thu\t Fri\t Sat");

  let strWeek = "";
  for (let i = 0; i < 6; i++) {
    for (let j = 0; j < 7; j++) {
      if (j < dayWeek) {
        strWeek += "\t";
      } else {
        dayWeek = 0;
        if (day < 10) {
          strWeek += `   ${day}\t`;
        } else {
          strWeek += `  ${day}\t`;
        }
        day++;
        if (day > daysMonth[month-1]) {
          console.log(strWeek);
          console.log("*****************************************************");
          return 0;
        }
      }
    }
    console.log(strWeek);
    strWeek = "";
  }
}
main();