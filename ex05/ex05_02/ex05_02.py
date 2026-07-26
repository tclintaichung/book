def main():
    number = 0
    print("Enter a number to compute its factorial: ")
    number = int(input())
    factorial = 1
    for i in range(1, number + 1):
        factorial *= i

    print("The factorial of", number, "is", factorial)
    return 0

if __name__ == "__main__":
    main()  