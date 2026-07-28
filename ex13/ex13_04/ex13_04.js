let foodId = undefined;
let foodName = undefined;
let expiryDate = undefined;
let description = undefined;
let place = undefined;

const createButton = document.getElementById("create-button");
if (createButton) {
  createButton.addEventListener("click", handleCreate);
}
const searchButton = document.getElementById("search-button");
if (searchButton) {
  searchButton.addEventListener("click", handleSearch);
}
const updateButton = document.getElementById("update-button");
if (updateButton) {
  updateButton.addEventListener("click", handleUpdate);
}
const deleteButton = document.getElementById("delete-button");
if (deleteButton) {
  deleteButton.addEventListener("click", handleDelete);
}
const maintainResult = document.getElementById("maintain-result");
if (maintainResult) {
  maintainResult.addEventListener("click", handleChoose);
}

function handleCreate(event) {
  const output = document.querySelector("#create-output");
  event.preventDefault();
  foodName = document.getElementById("name").value;
  description = document.getElementById("description").value;
  place = document.querySelector('input[name="place"]:checked').value;
  expiryDate = document.getElementById("expiry-date").value;
  output.innerText = '';
  
  let strFacility = `Food/drink Name: ${foodName}\nDescription: ${description}\nStorage place: ${place}\nExpiry Date: ${expiryDate}`;
  if (foodName === "") {
      alert("Please enter a name.");
      return;
  }
  fetch("http://localhost:3000/foods", {
    method: "POST",
    mode: "cors",
    headers: {
      "Content-Type": "application/json"
    },
    body: JSON.stringify({
      name: foodName,
      description: description,
      place: place,
      expiryDate: expiryDate
    })
  })
  .then(response => response.json())
  .then(data => {
    console.log('Success:', data);
  })
  .catch((error) => {
    console.error('Error:', error);
  });
  output.innerText = strFacility;
}

function handleUpdate(event) {
  event.preventDefault();
  foodName = document.getElementById("search-name").value;
  description = document.getElementById("new-description").value;
  place = document.querySelector('input[name="new-place"]:checked').value;
  expiryDate = document.getElementById("new-date").value;
  let strFacility = `Food/drink Name: ${foodName}\nDescription: ${description}\nStorage place: ${place}\nExpiry Date: ${expiryDate}`;
  fetch("http://localhost:3000/foods", {
    method: "PUT",
    mode: "cors",
    headers: {
      "Content-Type": "application/json"
    },
    body: JSON.stringify({
      _id: foodId,
      name: foodName,
      description: description,
      place: place,
      expiryDate: expiryDate
    })
  })
  .then(response => response.json())
  .then(data => {
    console.log('Success:', data);
  })
  .catch((error) => {
    console.error('Error:', error);
  });
  document.getElementById("maintain-output").innerText = strFacility;
}

function handleSearch(event) {
  event.preventDefault();
  foodName = document.getElementById("search-name").value;
  const listUl = document.querySelector("#maintain-result");
  const params = new URLSearchParams({ name: foodName });
  const output = document.querySelector("#maintain-output");
  listUl.innerHTML = '';
  output.innerText = '';
  let strFetch = '';
  if (foodName) {
    strFetch = `http://localhost:3000/foods?${params}`;
  }
  else {
    strFetch = 'http://localhost:3000/foods';
  }

  fetch(strFetch)
    .then(response => response.json())
    .then(data => {
      console.log('Success:', JSON.stringify(data));
      data.forEach(item => {
        listUl.insertAdjacentHTML('beforeend',
          `<li name="search-list" class="search-list">${item.name};${item.description};${item.place};${item.expiryDate};${item._id}</li>`)
      });
      
    })
    .catch((error) => {
      console.error('Error:', error);
    });
}

function handleChoose(event) {
  if (event.target.tagName === 'LI') {
    const strOptions = event.target.textContent.split(';');
    [foodName, description, place, expiryDate, foodId ] = strOptions;

    const newName = document.getElementById("search-name");
    newName.value = foodName;
    const newDate = document.getElementById("new-date");
    if (newDate !== undefined) {
      newDate.value = expiryDate.substring(0, 10);
    }
    const newDescription = document.getElementById("new-description");
    newDescription.value = description;
    const places = document.getElementsByName("new-place");
    places.forEach(option => {
      if (option.value === place) {
        option.checked = 1;
      } else {
        option.checked = 0;
      }
    });
  }
}

function handleDelete(event) {  
  event.preventDefault();
  const output = document.querySelector("#maintain-output");
  output.innerText = '';

  const params = new URLSearchParams({ _id: foodId });
  fetch(`http://localhost:3000/foods?${params}`, {
    method: "DELETE",
    mode: "cors",
    headers: {
      "Content-Type": "application/json"
    }
  })
  .then(response => response.json())
  .then(data => {
    console.log('Success:', data);
    const { _id, name } = data;
    output.innerText =  `${name}/${_id} deleted}`;
  })
  .catch((error) => {
    console.error('Error:', error);
  });
}