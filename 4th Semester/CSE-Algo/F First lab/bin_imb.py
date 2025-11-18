test_case = int(input())
while test_case:
    test_case -= 1
    n = int(input())
    string = input()

    if string.count("1") == n:
        print("NO")
    else:
        print("YES")
