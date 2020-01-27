n = int(input())

arr = []

for i in range(n):
    arr.append(int(input()))

arr = list(map(int, arr))

arr.sort()

print(arr)
