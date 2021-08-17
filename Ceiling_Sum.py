import math
for _ in range(int(input())):
    a,b = list(map(int, input().split()))
    c=int(0)
    if(a==b):
        c=0
    if(b>a):
        c=int((b-a)/2)
        c+=1
    elif(b<a):
        if((a-b)%2==0):
            c=int((b-a)/2)+1
        else:
            c=int((b-a)/2)
    print(c)



        