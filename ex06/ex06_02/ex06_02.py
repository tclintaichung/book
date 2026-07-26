GAUGE_RATE = 35.7
WATER_UNIT = [7.35, 9.45, 11.55, 12.0750]
DEDUCT_RATE = [0., 21.0, 84.0, 110.25]

def water_rate(consumption):
    rate = 0.0

    if consumption <= 0:
        rate = 0.0
    elif consumption <= 10:
        rate = consumption * WATER_UNIT[0] - DEDUCT_RATE[0]
    elif consumption <= 30:
        rate = consumption * WATER_UNIT[1] - DEDUCT_RATE[1]
    elif consumption <= 50:
        rate = consumption * WATER_UNIT[2] - DEDUCT_RATE[2]
    else:
        rate = consumption * WATER_UNIT[3] - DEDUCT_RATE[3]
    return round(rate + GAUGE_RATE)

def main():
    consumption = 0.0
    water_fee = 0.0
    while True:
        print("Enter your water consumption (in m^3): ")
        consumption = float(input())
        if consumption < 0:
            print("Invalid consumption. Exiting.")
            break
        water_fee = water_rate(consumption)
        print("Your water fee is: NT$" + str(water_fee))
    return 0

if __name__ == "__main__":
    main()  