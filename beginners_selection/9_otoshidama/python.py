N, Y = map(int, input().split())

# 10000円札、5000円札、1000円札の枚数をそれぞれ試す
for x in range(N + 1):
    for y in range(N - x + 1):
        z = N - x - y
        if z >= 0 and 10000 * x + 5000 * y + 1000 * z == Y:
            print(x, y, z)
            exit()

# 解が見つからない場合
print(-1, -1, -1)
