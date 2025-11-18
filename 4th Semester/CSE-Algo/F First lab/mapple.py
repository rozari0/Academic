n, m = map(int, input().split())
numbers = list(map(int, input().split()))

collected_cake = 0
cakes = [0 for _ in range(n)]

for _ in range(m):
    for i, num in enumerate(numbers):
        cakes[i] += num

    maximum = max(cakes)

    cakes[cakes.index(maximum)] = 0
    collected_cake += maximum

print(collected_cake)
