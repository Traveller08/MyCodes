import math
for _ in range(int(input())):
    n,k = list(map(int, input().split()))
    ls=int(math.pow(2,n))
    lf=ls
    ls-=1
    ans=int(0)
    m=int(lf/2)
    if(k<=m):
        ans=2*k*ls
    elif(k>m):
        ans=2*m*ls
    print(ans)

        