for _ in range(int(input())):
    a,b = list(map(int, input().split()))
    if(a+b<3):
        print(1)
    elif(a+b>=3 and a+b<=10):
        print(2)
    elif(a+b>=11 and a+b<=60):
        print(3)
    elif(a+b>60):
        print(4)
