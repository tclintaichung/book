paper_sizes = dict([
   	("A0", [841, 1189]), ("A1", [594,  841]), ("A2", [420, 594]),
    ("A3", [297, 420]), ("A4", [210, 297]), ("A5", [148, 210]),
    ("A6", [105, 148]), ("A7", [74, 105]), ("A8", [52, 74]),
    ("A9", [37, 52]), ("A10", [26, 37])])

def main():
  str_paper = ""
  choice = ""
  while True:
    choice = input("Enter a paper size (A0 to A10) or 'q' to quit: ")
    if (choice == "q"):
      break
    choice = choice.upper()   
    for key, value in paper_sizes.items():
      if (key == choice.strip()):
        str_paper = "Size of " + choice + ": "
        str_paper += str(value[0]) + " x " + str(value[1])
        print(str_paper)
        break
  print("Goodbye!")
  return 0

if __name__ == "__main__":
  main()