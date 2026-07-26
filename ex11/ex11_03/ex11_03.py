from datetime import datetime

def main():
  print("Enter a schedule date in the format YYYY-MM-DD HH:MM:SS")
  schedule_date = input("Date: ").strip()
  if len(schedule_date) == 10:
    schedule_date += " 00:00:00"
  elif len(schedule_date) == 13:
    schedule_date += ":00:00"
  elif len(schedule_date) == 16:
    schedule_date += ":00"
  schedule_date = datetime.strptime(schedule_date, "%Y-%m-%d %H:%M:%S")
  current_date = datetime.now()
  print(current_date)
  time_left = schedule_date - current_date
  if schedule_date < current_date:
    print("The schedule date is passed!")
    return
  str_time = "Time left: " + str(time_left.days) + " days, " + str(time_left.seconds // 3600) + " hours, "
  str_time += str((time_left.seconds // 60) % 60) + " minutes, " + str(time_left.seconds % 60) + " seconds"
  print(str_time)

if __name__ == "__main__":
  main()