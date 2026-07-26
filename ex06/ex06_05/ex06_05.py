from src.leap import *

def main():
  while True:
    year = int(input("Enter year: "))
    if year < 0:
      print("Invalid year. Exiting.")
      break
    if is_leap_year(year):
      print(f"Year {year} is a leap year.")
    else:
      print(f"Year {year} is a common year.")

if __name__ == "__main__":
  main()