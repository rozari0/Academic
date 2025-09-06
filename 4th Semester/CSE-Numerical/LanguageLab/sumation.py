def sum(*args) -> int:
    sum = 0
    for item in args:
        sum += item
    return sum


answer = sum(*map(int, input("Input numbers: ").split()))

print(f"Sum is {answer}")
