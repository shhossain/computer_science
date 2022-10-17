t = int(input())
for i in range(t):
    n = int(input())
    lis = list(map(int,input().split()))
    print(lis.count(1)+lis.count(3))
