n=int(input())
s=input()
cnt1=int(0)
cnt2=int(0)
for i in range(n-1):
    if(s[i]==s[i+1]):
        continue
    else :
        if(s[i]=='F'):
            cnt2+=1
        elif(s[i]=='S'):
            cnt1+=1
if(cnt1>cnt2):
    print("YES")
else:
    print("NO")