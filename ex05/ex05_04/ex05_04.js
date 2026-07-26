const WEEKDAY = [
    " Sun ", " Mon ", " Tue ", " Wed ", " Thu ", " Fri ", " Sat "
];  
const COURSE_NAME = [   
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
];

function main() {
  let course = [
    [0, 1, 2, 0, 0],
    [0, 1, 2, 0, 0],
    [1, 0, 0, 4, 3],
    [1, 0, 0, 4, 3],
    [7, 8, 5, 6, 9],
    [7, 8, 5, 6, 9],
    [0, 0, 5, 6, 0]
  ];
  console.log("-------------------------------------");
  let str_week = "";
  for (let i = 1; i < 6; i++) {
    str_week += WEEKDAY[i] + "\t";
  }
  console.log(str_week);
  console.log("-------------------------------------");
  str_week = "";
  for (let i = 0; i < 7; i++) {
    for (let j = 0; j < 5; j++) {
      if (course[i][j] == 0) {
        str_week += COURSE_NAME[0] + "\t";
      } else {
        str_week += COURSE_NAME[course[i][j]] + "\t";
      }
    }
    console.log(str_week);
    str_week = "";
  }
  console.log("-------------------------------------");
  return 0;
}
main();