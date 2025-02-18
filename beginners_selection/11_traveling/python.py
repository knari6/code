n = int(input())

array = []
for i in range(n):
    input_array = list(map(int, input().split()))
    array.append(input_array)

print(array)
