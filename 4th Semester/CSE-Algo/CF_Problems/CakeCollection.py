def cake_collection():
    n, m = map(int, input().split())
    numbers = list(map(int, input().split()))

    collected_cake = 0
    cakes = []

    for i in range(1, m + 1):
        cakes.append([x * i for x in numbers])

    while len(cakes) and m and len(cakes[-1]):
        # print(cakes)
        maximum = max(cakes[-1])
        max_index = cakes[-1].index(maximum)
        cakes.pop()
        for i in cakes:
            i.pop(max_index)

        collected_cake += maximum

    print("Maximum: ", collected_cake)


test_case = int(input())
for _ in range(test_case):
    cake_collection()
