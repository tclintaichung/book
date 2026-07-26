def main():
    address = "1, Main Str., "
    region = "West District, "
    city = "Taichung"
    address = address + region
    address = address + city
    print(address)
    print("Length of address string: " + str(len(address)))
    return 0

if __name__ == "__main__":
    main()