n, a, b = map(int, input().split())

result = 0
for i in range(n + 1):
    num = str(i)
    digit_sum = sum(map(int, num))
    if a <= digit_sum <= b:
        result += digit_sum

print(result)
