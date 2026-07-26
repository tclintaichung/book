from js import document
from pyodide.ffi import create_proxy

print("Hi")
def on_click(event):
  print("Hello")

greet = lambda name: print(f"Hello, {name}!")

js_greet = create_proxy(greet)
button = document.getElementById("button")
button.addEventListener("click", create_proxy(js_greet("tc")))