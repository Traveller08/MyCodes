def fact(n,dp):
    if(n==1 or n==0):
        return 1
    ans=n*fact(n-1,dp)
    dp[n]=ans
    if (dp[n])!=-1:
        return dp[n]

for _ in range(int(input())):
    k,n=map(int,input().split())
    pri=int(0)
    if(k>n):
        dp=range(k+1)
        dp=[]
        for i in range(k+1):
            dp.append(-1)
        pri=int(fact(k-1,dp)/(fact(n-1,dp)*fact(k-n,dp)))
    elif(k==n):
        pri=1
    else:
        pri=0

    
    print(pri)