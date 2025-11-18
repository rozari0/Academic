test_case = int(input())

for _ in range(test_case):
    number = input()
    print(min([int(x) for x in list(number)]))
