for _ in range(int(input())):
    n=int(input())
    s=input()
    ans=""
    for i in range(0,n):
        if s[i]=='b' : 
            ans+=s[i]
    for i in range(0,n):
        if s[i]=='u' : 
            ans+=s[i]
    for i in range(0,n):
        if s[i]=='g' : 
            ans+=s[i]
    for i in range(0,n):
        if s[i]=='y' : 
            ans+=s[i]
    for i in range(0,n):
        if s[i]=='r' : 
            ans+=s[i]
    for i in range(0,n):
        if s[i]=='t' : 
            ans+=s[i]
    for i in range(0,n):
        if s[i]!='b' and s[i]!='u' and s[i]!='g' and s[i]!='y' and s[i]!='r' and s[i]!='t': 
            ans+=s[i]
    print(ans)