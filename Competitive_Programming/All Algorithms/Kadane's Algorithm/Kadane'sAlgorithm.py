n = int(input())

arr = list(map(int, input().split(" ")))

cs = arr[0]
ms = arr[0]

for i in range(1, n):
    cs = max(cs + arr[i], arr[i])
    ms = max(ms, cs)

print(ms)