import random

def main():
    upper = 100
    lower = 0
    data = []
    data_size = int(input("Enter data size: "))

    for i in range(data_size):
        data.append(random.randint(lower, upper))

    index = 1
    for i in data:
        print(str(index) + ": " + str(i))
        index += 1

if __name__ == "__main__":
    main()