number: int = int(input("Input n: "))

sum: int = 0

for x in range(number + 1):
    print(x, end=" ")
    sum += x

print()
print(f"Sum is: {sum}")
