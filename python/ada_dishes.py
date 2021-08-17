t=int(input())
for _ in range(t):
    n=int(input())
    c=list(map(int,input().split()))
    c.sort(reverse=True)
    burner_one=int(0)
    burner_two=int(0)
    for x in c:
        if(burner_one<burner_two):
            burner_one+=x
        else :
            burner_two+=x
    print (max(burner_one,burner_two))


