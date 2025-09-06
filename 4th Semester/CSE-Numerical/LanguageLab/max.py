n1 = int(input("Input first number: "))
n2 = int(input("Input second number: "))
n3 = int(input("Input third number: "))

max = n1
if max < n2:
    max = n2
if max < n3:
    max = n3

print(f"Max number is {max}")
