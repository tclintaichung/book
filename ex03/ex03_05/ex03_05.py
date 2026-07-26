def main():
  x = int(input("Enter x: "))
  y = int(input("Enter y: "))
  new_xy = x & y
  print(str(x) + " & " + str(y) + " = " + str(new_xy))

  new_xy = x | y
  print(str(x) + " | " + str(y) + " = " + str(new_xy))

  new_xy = x ^ y
  print(str(x) + " ^ " + str(y) + " = " + str(new_xy))
  return 0

if __name__ == "__main__":
  main()