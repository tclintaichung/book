import promptSync from 'prompt-sync';
const prompt = promptSync();

function getDateTime(timeStr) {
  const [dateStr, clockStr] = timeStr.split(" ");
  const [year, month, day] = dateStr.split("-").map(Number);
  const [hour, minute, second] = clockStr.split(":").map(Number);
  return new Date(year, month - 1, day, hour, minute, second);
}
function getTimeLeft(scheduleDate, currentDate) {
  let timeLeft = scheduleDate.getTime() - currentDate.getTime();  
  if (timeLeft < 0) {
    return null;
  } 
  timeLeft /= 1000; 
  const days = Math.floor(timeLeft / 86400);
  timeLeft = timeLeft % 86400;
  const hours = Math.floor(timeLeft / 3600);
  timeLeft = timeLeft % 3600;
  const minutes = Math.floor(timeLeft / 60);
  const seconds = Math.round(timeLeft % 60);
  return {days, hours, minutes, seconds};
}
function main() {
  console.log("Enter a schedule date in the format YYYY-MM-DD HH:MM:SS");
  let scheduleDateStr = prompt("Date: ");
  if (scheduleDateStr.length == 10 ) {
    scheduleDateStr += " 00:00:00";
  }
  else if (scheduleDateStr.length == 13) {
    scheduleDateStr += ":00:00";  
  }
  else if (scheduleDateStr.length == 16) {  
    scheduleDateStr += ":00";
  }
  const scheduleDate = getDateTime(scheduleDateStr);
  const currentDate = new Date();
  let timeLeft = scheduleDate.getTime() - currentDate.getTime();
  if (timeLeft < 0) {
    console.log("The schedule date is passed!");
    return;
  }
  const {days, hours, minutes, seconds} = getTimeLeft(scheduleDate, currentDate);
  console.log(`Time left: ${days} days, ${hours} hours, ${minutes} minutes, ${seconds} seconds`);
}
main();