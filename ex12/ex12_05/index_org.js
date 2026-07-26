const seatsId = [
  ["r1-01", "r1-02", "r1-03", "r1-04", "r1-05", "r1-06", "r1-07", "r1-08", "r1-09", "r1-10"],
  ["r2-01", "r2-02", "r2-03", "r2-04", "r2-05", "r2-06", "r2-07", "r2-08", "r2-09", "r2-10"],
  ["r3-01", "r3-02", "r3-03", "r3-04", "r3-05", "r3-06", "r3-07", "r3-08", "r3-09", "r3-10"],
  ["r4-01", "r4-02", "r4-03", "r4-04", "r4-05", "r4-06", "r4-07", "r4-08", "r4-09", "r4-10"],
  ["r5-01", "r5-02", "r5-03", "r5-04", "r5-05", "r5-06", "r5-07", "r5-08", "r5-09", "r5-10"],
];
const TOTAL_SEATS = 50;
let totalSeats = TOTAL_SEATS;
const output = document.getElementById("booking-status");
const button = document.getElementById("btn-start");

let seatsStr = '';
window.onload = loadSeats;

button.addEventListener('click', () => {
  localStorage.clear();
  localStorage.setItem('seatsStr', '');
  localStorage.setItem('totalSeats', TOTAL_SEATS);
  button.classList.add('btn-click');
  seatsId.forEach((seatRow)=>{
    seatRow.forEach((seatCol) => {
      const seat = document.getElementById(seatCol);
      seat.style.backgroundColor = "blue";
      seat.setAttribute('checked', 0);
    })
  })
  totalSeats = localStorage.getItem('totalSeats');
  output.innerText = "Available seats: " + String(totalSeats);
  button.disabled = true;
});
function loadSeats() {
  seatsStr = localStorage.getItem('seatsStr');
  totalSeats = localStorage.getItem('totalSeats');
  const seats = seatsStr.split(';');
  seatsId.forEach((seatRow)=>{
    seatRow.forEach((seatCol) => {
      const seat = document.getElementById(seatCol);
      seat.style.backgroundColor = "blue";
      seat.setAttribute('checked', 0);
    })
  })
  seats.forEach((seatId)=>{
    const seat = document.getElementById(seatId);
    if (seat) {
      seat.style.backgroundColor = "red";
      seat.setAttribute('checked', 1);
    }
  })
  output.innerText = "Available seats: " + String(totalSeats);
}
seatsId.forEach((seatRow) => {
  seatRow.forEach((seatId) => {
    const seat = document.getElementById(seatId);
    seatsStr = localStorage.getItem('seatsStr');
    seat.addEventListener("click", () => {
      const checked = seat.getAttribute('checked');
      if (checked == 0) {
        seat.style.backgroundColor = "red";
        seat.setAttribute('checked', 1);
        totalSeats = localStorage.getItem('totalSeats');
        totalSeats--;
        seatsStr += seatId + ';';
        localStorage.setItem('seatsStr', seatsStr);
        localStorage.setItem('totalSeats', totalSeats);
        output.innerText = "Available seats: " + String(totalSeats);
      }
      else if (checked == 1) {
        const seats = seatsStr.split(';');
        const index = seats.findIndex((seat) => seat == seatId);
        seats.splice(index, 1);
        seatsStr = seats.join(';');
        seat.style.backgroundColor = "blue";
        seat.setAttribute('checked', 0);
        totalSeats = localStorage.getItem('totalSeats');
        totalSeats++;
        localStorage.setItem('seatsStr', seatsStr);
        localStorage.setItem('totalSeats', totalSeats);
        output.innerText = "Available seats: " + String(totalSeats);
      }
    });
  });
});