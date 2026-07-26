import math

def main():
  oper = input("Enter +, -, *, /, %: ")
  num1 = int(input("Enter number 1: "))
  num2 = int(input("Enter number 2: "))

  match (oper):
    case '+':
      print(f"{num1} + {num2} = {num1 + num2}")
    case '-':
      print(f"{num1} - {num2} = {num1 - num2}")
    case '*':
      print(f"{num1} * {num2} = {num1 * num2}")
    case '/':
      print(f"{num1} / {num2} = {num1 / num2}")
    case '%':
      print(f"{num1} % {num2} = {math.floor(num1) % math.floor(num2)}")
    case _:
      print("No operation is performed")
  return 0

if __name__ == "__main__":
  main()
