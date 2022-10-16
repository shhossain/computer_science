from itertools import product

K,M=map(int,input().split())
list_elements=[]
for l in range(K):
    Ni, *elements=map(int,input().split())
    list_elements.append(elements)

max_=0
for l in product(*list_elements):
    res=sum([l[_]**2 for _ in range(K)])
    if res%M > max_:
        max_=res%M
print(max_)