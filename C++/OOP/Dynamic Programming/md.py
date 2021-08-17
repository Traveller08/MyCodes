for _ in range(int(input())):
    n,m=map(int,input().split())
    answer=int(0)
    for i in range(1,n+1):
        for j in range(i+1,n+1):
            if(((m%i)%j)==((m%j)%i)):
                answer+=1
    print(answer)
