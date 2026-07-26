const output = document.getElementById('output');
document.getElementById('getFood').addEventListener('click', (event) => {
  event.preventDefault();
  const food = document.getElementById('food').value;
  const url = `/foods/${food}`;
  fetch(url)
    .then(response => {
      if (!response.ok) {
        throw new Error(`HTTP error! Status: ${response.status}`);
      }
      return response.json();
    })
    .then(data => {
      output.textContent = `Food Name: ${data.name} / Amount: ${data.amount}`;
    })
    .catch(error => {
      output.textContent = 'GET Request failed!';
    });
});
document.getElementById('postUser').addEventListener('click', (event) => {
  event.preventDefault();
  const userName = document.getElementById('user').value;
  const email = document.getElementById('email').value;
  const data = {
    "name": userName,
    "email": email
  };
  fetch('/user', {
    method: 'POST', 
    headers: {
      'Content-Type': 'application/json' // Specify JSON content type
    },
    body: JSON.stringify(data) 
  })
  .then(response => {
    if (!response.ok) {
      throw new Error(`HTTP error! Status: ${response.status}`);
    }
    return response.json(); 
  })
  .then(result => {
    output.innerHTML= 'POST Request successful!<br\>' + JSON.stringify(result);
  })
  .catch(error => {
    output.textContent = 'POST Request failed!';
  });
});