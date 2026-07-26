def main():
  x = int(input("Enter x: "))
  shift = int(input("Enter number of digit to shift: "))

  new_x = x >> shift
  print(str(new_x) + " is right shift " + str(shift) + " digits of " + str(x))
  new_x = x << shift
  print(str(new_x) + " is left shift " + str(shift) + " digits of " + str(x))
  return 0

if __name__ == "__main__":
  main()