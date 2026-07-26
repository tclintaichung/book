import math

def main():
  changes = 0
  i = 0
  change_type = [500, 100, 50, 10, 5, 1]
  change_no = [0, 0, 0, 0, 0, 0]

  money = int(input("Enter the money you have: "))
  price = int(input("Enter the price of item: "))
  money = money - price

  while (money > 0):
    change_no[i] = math.floor(money / change_type[i])
    changes += change_no[i]
    money = money % change_type[i]
    i += 1
  
  change_str = ""
  print("Total coins: " + str(changes))
  change_str = "They are: 50(" + str(change_no[0]) + ");10(" + str(change_no[1]) + ");5("
  change_str +=  str(change_no[2]) + ");1("
  change_str +=  str(change_no[3]) + ")"
  print(change_str)
  return 0

if __name__ == "__main__":
  main()