def xero(n):
    m=b=int(n)
    two=int(0)
    five=int(0)
    i=int(0)
    while(m>0):
        two+=(m/pow(2,i))
        i=i+1
    i=int(0)
    while(b>0):
        five+=(b/pow(5,i))
        i=i+1
    return min(two,five)
   

for _ in range(int(input())):
    a = int(input())
    print(xero(a))

    

