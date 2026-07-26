days_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
MONTH_NAMES = [ 
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
]

def main(): 
  month = 0
  year = 0
  day_week = 0
  day = 1
  print("Enter year: ")
  year = int(input())
  if year < 0:
    print("Invalid year. Exiting.")
    return 1
  if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
    days_month[1] = 29
  print("Enter month (1-12): ")
  month = int(input())
  print("What day is the first day of the month (Sunday-0, Saturday-6): ")
  day_week = int(input())
  if month < 1 or month > 12:
    print("Invalid month. Exiting.")
    return 1
  if day_week < 0 or day_week > 6:
    print("Invalid day. Exiting.")
    return 1
  print("Calendar for " + MONTH_NAMES[month - 1] + ":")
  print("*****************************************************")
  print(" Sun\t Mon\t Tue\t Wed\t Thu\t Fri\t Sat")
  str_week = ""
  for i in range(6):
    for j in range(7):
      if j < day_week:
        str_week += "\t"
      else:
        day_week = 0
        if day < 10:
          str_week += f"   {day}"
        else:
          str_week += f"  {day}"
        day += 1
        str_week += "\t"
        if day > days_month[month-1]:
          print(str_week)
          print("*****************************************************")
          return 0  
    print(str_week)
    str_week = ""

if __name__ == "__main__":
  main()