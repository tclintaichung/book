def main():
  x = 0
  low = 11
  up = 20
  condition1 = False
  condition2 = False
  condition3 = False

  x = int(input("Enter x: "))

  condition1 = (x >= low) and (x <= up)
  condition2 = (x < low) or (x > up)
  condition3 = not (x >= up)

  print(str(x) + " is within [" + str(low) + ", " + str(up) + "]: " + str(condition1))
  print(str(x) + " is outside [" + str(low) + ", " + str(up) + "]: " + str(condition2))
  print(str(x) + " is less than " + str(up) + ": " + str(condition3))
  
  return 0

if __name__ == "__main__":
  main()