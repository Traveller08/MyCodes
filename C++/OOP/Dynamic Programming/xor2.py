def pwer(a,b):
    ans=int(1)
    while(b>0):
        if(b&1):
            ans=ans*a%1000000007
        a=a*a%1000000007
        b>>=1
    return ans
        

for _ in range(int(input())):
    n=int(input())
    answer=int(0)
    answer=pwer(2,n-1)
    print(answer)


