#https://codeforces.com/problemset/problem/122/A
n = input()
f = 1
for i in n:
    if(i!="4" and i != "7"):
        f=0
        break
if(int(n)  and (int(n)%4 == 0 or int(n)%7==0 or int(n)%44==0 or int(n)%47==0 or int(n)%74==0)):
    f=1

print('YES') if f else print("NO")
