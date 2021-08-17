def zero(a):
    p=a
    q=a
    five=int(0)
    two=int(0)
    i=int(0)
    while(int(p)>=1):
        five+=(p/pow(5,i))
        i+=1
    j=int(0)
    while(int(q)>=1):
        two+=(q/pow(2,j))
        j+=1
    return min(two,five)


for _ in range(int(input())):
    n=int(input())
    print(zero(n))

   