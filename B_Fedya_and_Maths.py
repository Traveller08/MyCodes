s=input()
n=len(s)
if(n==1):
    aa=int(s[0])
    if(aa%4==0):
        print(4)
    else :
        print(0)
else :
    ls=int(s[n-1])
    ls1=int(s[n-2])
    no=int(ls1*10+ls)
    if(no%4==0):
        print(4)
    else :
        print(0)