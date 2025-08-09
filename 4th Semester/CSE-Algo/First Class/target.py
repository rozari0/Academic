numbers = input("Input numbers: ").split()
numbers = [int(x) for x in numbers]
target: int = int(input("Input the target: "))
current: int = 0
length = len(numbers) - 1

i: int = 0
while i <= length:
    j = length
    while j > i:
        if numbers[i] + numbers[j] == target:
            print(i, j)
            break
        j -= 1
    i += 1
