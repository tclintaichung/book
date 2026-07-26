WEEKDAY = [
    " Sun ", " Mon ", " Tue ", " Wed ", " Thu ", " Fri ", " Sat "
]
COURSE_NAME = [ 
    "free",
    "Chin",
    "Engl",
    "Math",
    "Phys",
    "Chem",
    "Biol",
    "Hist",
    "Geog",
    "Comp",
]

def main():
  course = [
    [0, 1, 2, 0, 0],
    [0, 1, 2, 0, 0],
    [1, 0, 0, 4, 3],
    [1, 0, 0, 4, 3],
    [7, 8, 5, 6, 9],
    [7, 8, 5, 6, 9],
    [0, 0, 5, 6, 0]
  ]
  print("-------------------------------------")
  str_week = "" 
  for i in range(1, 6):
    str_week += WEEKDAY[i] + "\t"
  print(str_week)
  print("-------------------------------------")
  str_week = ""
  for i in range(7):
    for j in range(5):
      if course[i][j] == 0:
        str_week += COURSE_NAME[0] + "\t"
      else:
        str_week += COURSE_NAME[course[i][j]] + "\t"
    print(str_week)
    str_week = ""
  print("-------------------------------------")
  return 0

if __name__ == "__main__":
  main()