import math
for _ in range(int(input())):
    e,k = list(map(int, input().split()))
    a=int(0)
    while(e>1):
        p=int(e/k)
        e=p
        a+=1
    if(e>0):
        a+=1
    print(a)