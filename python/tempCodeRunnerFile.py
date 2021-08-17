store={}
def fact(n):
    if n in store.keys():
        return store[n]
    if(n==1 or n==0):
        return 1
    store[n]=fact(n-1)*n
    return store[n]

for _ in range(int(input())):
    k,n=list(map(int,input().split()))
    ans=int(0)
    if(k>=n and k!=0 and n!=0):
        ans=int((fact(k-1))/(fact(k-n)*fact(n-1)))
    else:
        ans=0
    print(ans)
        

