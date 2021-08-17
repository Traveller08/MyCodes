for _ in range(int(input())):
    n,k=list(map(int,input().split()))
    arr=[]
    for i in range(n):
        arr.append(list(map(int,input().split())))
    flag=0
    for i in range(n):
        ans=1
        for j in range(n):
           if i<n and j<n :
                temp=abs(arr[i][0]-arr[j][0])+abs(arr[i][1]-arr[j][1])
                if temp > k :
                     ans=0
                     break
        if ans==1:
            flag=1
            break
    if flag==1:
        print(1)
    else :
         print(-1)


