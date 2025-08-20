number, limit = list(map(int, input().split()))

for _ in range(limit):
    last_digit = number % 10
    if last_digit:
        number -= 1
    else:
        number /= 10

print(int(number))
