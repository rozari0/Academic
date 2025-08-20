expected = int(input())
count = 0
while expected > 0:
    if expected % 2:
        count += 1
        expected -= 1
    else:
        expected /= 2

print(count)
