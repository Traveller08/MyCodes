for _ in range(int(input())):
    n,m=map(int,input().split())
    count=int(0)
    ans=[]
    ans=[1 for i in range(n+1)]
    for i in range(2,n+1):
        temp=m%i
        count+=ans[temp]
        for j in range(temp,n+1):
            ans[j]+=1
    print(count)