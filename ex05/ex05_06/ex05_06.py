TASK_LIST = [ 
    "wash clothes",
    "wash dishes",
    "clean house",
    "fix toilet",
    "cook dinner",
    "make coffee",
    "change light bulb",
    "water plants",
    "feed dog",
    "take out trash",
]

def main():
  task_option = 0
  index = 0
  tasks = [[-1] * 3 for _ in range(7)]

  for i in range(10):
    print(f"{i} - {TASK_LIST[i]}")

  for i in range(7):
    index = 0
    while True:
      print(f"Enter the task for day {i+1} (0-9): ")
      task_option = input()
      if not task_option.isdigit():
        tasks[i][index] = -1
        break
      task_option = int(task_option)
      if task_option < 0 or task_option > 9:
        print("Invalid task.")
        tasks[i][index] = -1
        break
      tasks[i][index] = task_option
      index += 1
      if index > 2:
        print("Next day tasks.")
        break
  for i in range(7):
    print(f"Day {i + 1} tasks: ")
    for j in range(3):
      if tasks[i][j] == -1:
        break
      print(f" {tasks[i][j]} - {TASK_LIST[tasks[i][j]]}")
    print(" ")

if __name__ == "__main__":
  main()
        