discount = [0.0, 0.05, 0.1, 0.15, 0.2, 0.25]
discount_price = [99.0, 299.0, 499.0, 999.0, 1999.0]

def main():
    price = 0.0
    price = int(input("Enter the price of the item: "))
    if (price < 0):
      print("Invalid price. Exiting.")
      return 1
    
    if (price <= discount_price[0]):
      print(f"Price: NT${(1.0 - discount[0])*price}")
    elif (price <= discount_price[1]):
      print(f"Discount price: NT${(1.0 - discount[1])*price}")
    elif (price <= discount_price[2]):
      print(f"Discount price: NT${(1.0 - discount[2])*price}")
    elif (price <= discount_price[3]):
      print(f"Discount price: NT${(1.0 - discount[3])*price}")
    elif (price <= discount_price[4]):
      print(f"Discount price: NT${(1.0 - discount[4])*price}")
    else:
      print(f"Discount price: NT${(1.0 - discount[5])*price}")
    return 0

if __name__ == "__main__":
    main()