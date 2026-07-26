def main():
   file_name = "../data/ex07_01.txt"
   print("Enter information: ")
   pf = open(file_name, 'w')
   if pf is None:
       print("Error open file")
       return
   while True:
       text = input()
       if text == "":
           pf.close()
           print("Data saved to " + file_name)
           break
       pf.write(text + "\n")

if __name__ == "__main__":
    main()