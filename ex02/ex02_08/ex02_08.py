shopping_list = [
  ["shampoo", 2, False],
  ["kitchen towel", 1, False],
  ["detergent", 2, False],
  ["cheese", 3, False],
  ["apple", 6, False]
]
def main(): 
  item = ["banana", 6, False]
  shopping_list.append(item)
  shopping_list[1][1] = 6
  shopping_list[3][2] = True
  size = len(shopping_list)
  print("Length of shopping list: " + str(size))
  print(shopping_list[size - 1][0] + ": " + 
              str(shopping_list[size - 1][1]) + "/" + 
              str(shopping_list[size - 1][2]))
  print(shopping_list[3][0] + ": " + 
              str(shopping_list[3][1]) + "/" + 
              str(shopping_list[3][2]))
  return 0

if __name__ == "__main__":
  main()