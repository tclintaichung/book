citizen =  {
  "name": "",
  "age": 0,
  "sex": "",
  "id": "",
}

def main():
  citizen['name'] = input("Enter name: ")
  citizen["age"] = input("Enter age: ")
  citizen["sex"] = input("Enter sex (F/M): ")
  citizen["id"] = input("Enter ID: ")
  print("*********************")
  print("Name: " + citizen["name"])
  print("Age: " + str(citizen["age"]))
  print("Sex: " + citizen["sex"].upper())
  print("ID: " + citizen["id"])
  return 0

if __name__ == "__main__":
  main()