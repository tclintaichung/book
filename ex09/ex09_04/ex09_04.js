import PromptSync from "prompt-sync";
const prompt = PromptSync();

const paperSize = new Map([
  ["A0", [841, 1189]], ["A1", [594,  841]], ["A2", [420, 594]],
  ["A3", [297, 420]], ["A4", [210, 297]], ["A5", [148, 210]],
  ["A6", [105, 148]], ["A7", [74, 105]], ["A8", [52, 74]],
  ["A9", [37, 52]], ["A10", [26, 37]]]);
function main() {
  let strPaper = "";
  let choice = "";
  let it = undefined;
  do {
    choice = prompt("Enter a paper size (A0 to A10) or 'q' to quit: ");
    if (choice == "q") {
      break;
    }
    choice = choice.toUpperCase();
    for (let [key, value] of paperSize) {
      if (key === choice.trim()) {
        strPaper = "Size of " + choice + ": ";
        strPaper += String(value[0]) + " x " + String(value[1]);
        console.log(strPaper);
        break;
      }
    }
  } while (true);
  console.log("Goodbye!");
  return 0;
} 
main();