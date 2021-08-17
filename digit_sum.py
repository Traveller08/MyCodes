sum,l = list(map(int, input().split()))
ans=[]
if(sum>9*l or sum<0):
    print(-1)
elif (sum==0 and l>1):
    print(-1)
else:
    for i in range (0,l):
        ans.append(0)
    for j in range (1000):
        for i in range (0,l):
            if(sum>=1):
                ans[i]+=1
                sum-=1
            else :
                ans[i]+=sum
                break
    for i in range(l):
        print(ans[i],end="")
