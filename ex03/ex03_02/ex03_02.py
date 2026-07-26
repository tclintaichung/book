def main():
  x = int(input("Enter x: "))
  y = int(input("Enter y: "))

  print(str(x) + " is greater than " + str(y) + " is " + str(x > y))
  print(str(x) + " is less than " + str(y) + " is " + str(x < y))
  print(str(x) + " is equal to " + str(y) + " is " + str(x == y))

if __name__ == "__main__":
  main()