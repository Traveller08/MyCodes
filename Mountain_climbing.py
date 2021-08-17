import math
n=int(input())
arr=list(map(int, input().split()))
ans=int(0)
ans+=arr[0]
ans+=arr[n-1]
for i in range (1,n):
    ans+=abs(arr[i]-arr[i-1])
ans+=n
print(ans)
