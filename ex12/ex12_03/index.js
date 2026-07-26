const submit = document.getElementById("submit");
const myName = document.getElementById("name");
const student = document.getElementById("student");
const teacher = document.getElementById("teacher");
const staff = document.getElementById("staff");
const birthday = document.getElementById("birthday");
const profile = document.querySelector("p");
submit.addEventListener('click', (event) => {
  event.preventDefault();
  let myProfile = "***Your profile***<br/>";
  myProfile += "Name: " + myName.value + "<br/>Status: ";
  if (student.checked) {
    myProfile += `${student.value}<br\>`;
  } else if (teacher.checked) {
    myProfile += `${teacher.value}<br\>`;
  } else {
    myProfile += `${staff.value}<br\>`;
  }
  myProfile += "Birthday: " + birthday.value ;
  profile.innerHTML = myProfile;
})