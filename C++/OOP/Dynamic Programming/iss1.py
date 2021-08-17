import math
for _ in range(int(input())):
    k=int(input())
    sum=int(0)
    for i in range(1,2*k+1):
        sum+=(math.gcd(k+(i*i),(k+(i+1)*(i+1))))
    print(sum)