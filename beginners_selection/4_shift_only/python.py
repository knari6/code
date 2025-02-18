n = int(input())
array = list(map(int, input().split()))

count = 0
while True:
    can_divide = True
    for i in range(n):
        if array[i] % 2 != 0:
            can_divide = False
            break

    if not can_divide:
        break

    for i in range(n):
        array[i] //= 2
    count += 1

print(count)
