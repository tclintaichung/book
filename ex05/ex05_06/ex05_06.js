import promptSync from 'prompt-sync';
const prompt = promptSync();

const TASK_LIST = [ 
    "wash clothes", "wash dishes", "clean house", "fix toilet", "cook dinner",
    "make coffee", "change bulb", "water plants", "feed dog", "take out trash"
];

function main() {
  let taskOption = 0;
  let index = 0;
  let tasks = Array.from({ length: 7 }, () => Array(3).fill(-1));

  for (let i = 0; i < 10; i++) {
    console.log(`${i} - ${TASK_LIST[i]}`);
  }
  for (let i = 0; i < 7; i++) {
    index = 0;
      do{
        console.log(`Enter the task for day ${i+1} (0-9): `);
        taskOption = parseInt(prompt());
        if (isNaN(taskOption)) {
          tasks[i][index++] = -1;
          break;
        }
        if (taskOption < 0 || taskOption > 9) {
          console.log("Invalid task.");
          tasks[i][index++] = -1;
          break
        }
        tasks[i][index++] = taskOption;
        if (index > 2) {
          console.log("Next day tasks.");
          break;
        }
      } while (true);
    }
    for (let i = 0; i < 7; i++) {
      console.log(`Day ${i + 1} tasks: `);
      for (let j = 0; j < 3; j++) {
        if (tasks[i][j] == -1) {
          break;
        }
        console.log(` ${tasks[i][j]} - ${TASK_LIST[tasks[i][j]]}`);
      }
    }
}
main();