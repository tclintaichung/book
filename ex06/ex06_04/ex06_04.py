def standard(nation):
  match nation:
    case 1:  # US standard
      return [12000.0, 3.517]
    case 2:  # Japan standard
      return [10000.0, 2.93]
    case 3:  # Taiwan standard
      return [8000.0, 2.34]
    case _:
      pass
def main():
  while True:
    try:
      print("Enter nation (1: US, 2: Japan, 3: Taiwan): ")
      nation = int(input())
      if nation < 1 or nation > 3:
        print("Invalid nation. Exiting.")
        break

      factor = standard(nation)
      print("Enter value in tons: ")
      ton = float(input())
      BTU = ton * factor[0]
      print(str(ton) + " tons = " + str(BTU) + " BTU")
      kW = ton * factor[1]
      print(str(ton) + " tons = " + str(kW) + " kW")
    except ValueError:
      print("Invalid input. Please enter a number.")

if __name__ == "__main__":
  main()