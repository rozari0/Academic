numbers = input("Input numbers: ").split()
numbers = [int(num) for num in numbers]

new_numbers = []
for num in numbers:
    if num in new_numbers:
        print(f"{num}")
        break
    else:
        new_numbers.append(num)
