from js import document, localStorage, window
from pyodide.ffi import create_proxy

seats_id = [
  ["r1-01", "r1-02", "r1-03", "r1-04", "r1-05", "r1-06", "r1-07", "r1-08", "r1-09", "r1-10"],
  ["r2-01", "r2-02", "r2-03", "r2-04", "r2-05", "r2-06", "r2-07", "r2-08", "r2-09", "r2-10"],
  ["r3-01", "r3-02", "r3-03", "r3-04", "r3-05", "r3-06", "r3-07", "r3-08", "r3-09", "r3-10"],
  ["r4-01", "r4-02", "r4-03", "r4-04", "r4-05", "r4-06", "r4-07", "r4-08", "r4-09", "r4-10"],
  ["r5-01", "r5-02", "r5-03", "r5-04", "r5-05", "r5-06", "r5-07", "r5-08", "r5-09", "r5-10"],
]
TOTAL_SEATS = 50
output = document.getElementById("booking-status")
reset_btn = document.getElementById("reset-btn")
def init_seats(event):
  localStorage.clear()
  localStorage.setItem('seatsStr', '')
  localStorage.setItem('totalSeats', str(TOTAL_SEATS))
  output.innerText = "Available seats: " + str(TOTAL_SEATS)
                                               
def load_seats():
  seats_str = localStorage.getItem('seatsStr')
  total_seats = localStorage.getItem('totalSeats')
  if not seats_str:
    seats = []
  else:
    seats = seats_str.split(';')
  for seat_id_row in seats_id:
    for seat_id in seat_id_row:
      seat = document.getElementById(seat_id)
      seat.style.backgroundColor = "blue"
      seat.setAttribute('checked', 0)
  for seat_id in seats:
    seat = document.getElementById(seat_id)
    if (seat):
      seat.style.backgroundColor = "red"
      seat.setAttribute('checked', 1)
  output.innerText = "Available seats: " + str(total_seats)
def set_seat(event):
  if event.target.tagName != 'DIV':
    return  
  seat_id = event.target.id
  if not seat_id or seat_id[0] != 'r':
    return 
  seat = document.getElementById(seat_id)
  checked = seat.getAttribute('checked')
  if int(checked) == 0:
    seat.style.backgroundColor = "red"
    seat.setAttribute('checked', 1)
    total_seats = int(localStorage.getItem('totalSeats'))
    total_seats -= 1
    seats_str = localStorage.getItem('seatsStr')
    seats_str += seat_id + ';'
  elif int(checked) == 1:
    seats_str = localStorage.getItem('seatsStr')
    seats = seats_str.split(';')
    index = seats.index(seat_id)
    del seats[index]
    seats_str = ";".join(seats)
    seat.style.backgroundColor = "blue"
    seat.setAttribute('checked', 0)
    total_seats = int(localStorage.getItem('totalSeats'))
    total_seats += 1
  localStorage.setItem('seatsStr', seats_str)
  print(seats_str)
  localStorage.setItem('totalSeats', total_seats)
  output.innerText = "Available seats: " + str(total_seats)
init_seats_proxy = create_proxy(init_seats)
set_seat_proxy = create_proxy(set_seat)
load_seats_proxy = create_proxy(load_seats)
reset_btn.addEventListener('click', init_seats_proxy)
document.addEventListener("DOMContentLoaded", load_seats_proxy)
body = document.getElementsByTagName("body")[0]
body.addEventListener('click', set_seat_proxy)
window.onload = init_seats_proxy
window.setInterval(load_seats_proxy, 2000)