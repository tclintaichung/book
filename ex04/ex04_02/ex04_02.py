def main():
  year = 0

  print("Enter year: ")
  year = int(input())
  if year < 0:
    print("Invalid year. Exiting.")
    return 1
  if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
    print("Year " + str(year) + " is a leap year.")
  else:
    print("Year " + str(year) + " is a common year.")
  return 0

if __name__ == "__main__":
  main()