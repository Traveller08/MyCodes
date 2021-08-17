store = {}
def fibo(n):
    if n in store:
        return store[n]
    if(n==1 or n==0):
        store[n]=1
        return 1
    store[n]=fibo(n-2)+fibo(n-1)
    return fibo(n-2)+fibo(n-1)
n=int(input())
fibo(n)
print(store.values())