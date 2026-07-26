def standard(region):
  factor = [0.0, 0.0]

  if region == 1:  # US standard
    factor = [12000.0, 3.517]
  elif region == 2:  # Japan standard
    factor = [10000.0, 2.93]
  elif region == 3:  # Taiwan standard
    factor = [8000.0, 2.34]
  return factor

def ton_to_BTU(ton, factor):
  return ton * factor

def ton_to_kW(ton, factor):
  return ton * factor

def main():
  while True:
    try:
      print("Enter region (1: US, 2: Japan, 3: Taiwan): ")
      region = int(input())
      if region < 1 or region > 3:
        print("Invalid region. Exiting.")
        break

      factor = standard(region)

      print("Enter value in tons: ")
      ton = float(input())

      BTU = ton_to_BTU(ton, factor[0])
      print(str(ton) + " tons = " + str(BTU) + " BTU")

      kW = ton_to_kW(ton, factor[1])
      print(str(ton) + " tons = " + str(kW) + " kW")
    except ValueError:
      print("Invalid input. Please enter a number.")

if __name__ == "__main__":
  main()