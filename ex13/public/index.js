const form = document.getElementById("my-form");
form.addEventListener("submit", handle_submit);
console.log("Hello, World!");

function handle_submit(event) {
  event.preventDefault();
  let name = document.getElementById("name").value;
  let description = document.getElementById("description").value;
  let price = document.getElementById("price").value;
  let purchasedDate = document.getElementById("purchased-date").value;

  let strFacility = `Facility Name: ${name}\nDescription: ${description}\nPrice: ${price}\nPurchased Date: ${purchasedDate}`;
  if (name === "") {
      alert("Please enter a name.");
      return;
  }
  document.getElementById("output").innerText = strFacility;
}