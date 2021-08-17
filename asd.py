for _ in range(int(input())):
    x1,y1,x2,y2,t=map(int,input().split())
    d=int(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)))
    if(4*t*t>=d):
        print("Yes")
    else :
        print("No")