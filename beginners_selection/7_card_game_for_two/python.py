n = int(input())
array = list(map(int, input().split()))

alice = 0
bob = 0
while len(array) > 0:
    alice += max(array)
    array.remove(max(array))
    if len(array) == 0:
        break
    bob += max(array)
    array.remove(max(array))
    if len(array) == 0:
        break

print(alice - bob)
