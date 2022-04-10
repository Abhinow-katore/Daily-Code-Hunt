for _ in range(int(input())):
    n = int(input())
    s = str(input())
    X = 0
    o = 0
    for i in range(n):
        if s[i]=="0":
            X+=1
        else:
            o +=1
    if n%2 ==0:
        if X%2==0 and o%2 ==0 or X==o:
            print("YES")
        else:
            print("NO")
    else:
        print("YES")