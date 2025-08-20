def reverse(num: int) -> int:
    answer = 0
    while num > 0:
        answer = answer * 10 + num % 10
        num = num // 10
    return answer


limit = int(input())

while limit:
    limit -= 1
    first, second = map(int, input().split())
    print(reverse(reverse(first) + reverse(second)))
