from functools import reduce

def odd(x):
    return x % 2 == 1

def sum(a, b):
    return a + b

def main():
    x = list(range(1, 40))
    x = list(filter(odd, x))
    sum_series = reduce(sum, x, 0)
    print(sum_series)

if __name__ == "__main__":
    main()