my_obj = {
  "name": "tclin",
  "age": 68,
  "get_age": lambda: my_obj["age"],
  "set_age": lambda age: my_obj.update({"age": age}),
  "get_name": lambda: my_obj["name"],
  "set_name": lambda name: my_obj.update({"name": name}),
}
def main():
  my_obj["hobbies"] = ["reading", "jogging", "coding"]
  my_obj["hello"] = lambda: f"Hello, {my_obj['name']}!"
  print(my_obj["name"])
  print(my_obj["hobbies"])
  print(my_obj["hello"]())
  print(my_obj["get_name"]())
  my_obj["set_age"](70)
  print(my_obj["get_age"]())
  my_obj["set_name"]("John")
  print(my_obj["get_name"]())
if __name__ == "__main__":
  main()