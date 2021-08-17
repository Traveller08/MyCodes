import math
n=int(input())
val = list(map(int, input().split()))
even=int(0)
odd=int(0)
for i in range (n):
    if(val[i]%2==0):
        even+=1
    else :
        odd+=1
ans=int(0)
ans+=min(even,odd)
tt=min(even,odd)
even-=tt
odd-=tt
if(odd>=3):
    ans+=(int(odd/3))
print(ans)
