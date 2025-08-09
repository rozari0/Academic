number: int = int(input("Input n: "))


def toggle(num: int) -> int:
    return 0 if num else 1


starting: int = 1

for i in range(1, number + 1):
    temp: int = starting

    for j in range(1, i + 1):
        print(temp, end="")
        temp = toggle(temp)

    print()
    starting = toggle(starting)
