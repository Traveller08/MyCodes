
import math as mt
for _ in range(int(input())):
    n=int(input())
    cnt=mt.sqrt(2*n-1)
    cnt=int(cnt)
    ans=int(0)
    if cnt % 2==0:
        ans=int(cnt/2)
    else :
        ans=int(cnt/2)+1
    print(ans-1)
