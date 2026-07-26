discount = [0.0, 0.05, 0.1, 0.15, 0.2, 0.25]
discount_price = [100.0, 200.0, 500.0, 1000.0, 2000.0]

def main():
    price = int(input("Enter the price of the item: "))
    if price < 0:
        print("Invalid price. Exiting.")
        return 1
    match price:
        case price if price < discount_price[0]:
            print("Final price: NT$" + str((1.0 - discount[0]) * price))
        case price if price < discount_price[1]:
            print("Final price: NT$" + str((1.0 - discount[1]) * price))
        case price if price < discount_price[2]:
            print("Final price: NT$" + str((1.0 - discount[2]) * price))
        case price if price < discount_price[3]:
            print("Final price: NT$" + str((1.0 - discount[3]) * price))
        case price if price < discount_price[4]:
            print("Final price: NT$" + str((1.0 - discount[4]) * price))
        case _:
            print("Final price: NT$" + str((1.0 - discount[5]) * price))
    return 0

if __name__ == "__main__":
    main()