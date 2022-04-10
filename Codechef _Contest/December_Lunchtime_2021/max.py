for _ in range(int(input())):
    n=int(input())
    q=list(map(int,input().split()))
    q=sorted(q)
    ans=(q[-1]-q[0])*q[-2]
    print(ans)