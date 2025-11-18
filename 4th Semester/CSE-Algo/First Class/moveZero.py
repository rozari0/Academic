numbers = input("Input numbers: ").split()
numbers = [int(num) for num in numbers]

for i in range(numbers.count(0)):
    index = numbers.index(0)
    num = numbers.pop(index)
    numbers.append(num)

print(numbers)
