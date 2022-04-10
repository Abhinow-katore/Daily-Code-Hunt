import math
t=int(input())
for i in range(t):
    n=int(input()) 
    x=list(map(int, input().split()))
    k= 0
    m= [] 
    for i in range(0,n): 
        k=math.gcd(k,x[i])
        m.append(k)
    if m==x:
        print(*m)
    else:
        print(-1)




