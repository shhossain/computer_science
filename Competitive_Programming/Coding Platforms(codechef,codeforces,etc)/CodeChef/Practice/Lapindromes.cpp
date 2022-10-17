t = int(input())
for i in range(0, t):
  a = input()
  if len(a)%2 == 0:
    half_1 = a[:len(a)//2]
    half_2 = a[(len(a)//2):]
  else:
    half_1 = a[:(len(a)//2)+1]
    half_2 = a[(len(a)//2):]
  ans = 0
  for i in half_1:
    if half_1.count(i) == half_2.count(i):
      ans+=1
  if ans == len(half_1):
    print('YES')
  else:
    print('NO') 
