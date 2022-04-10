for _ in range(int(input())):
    value = int(input())
    s = str(input())
    c=d=n=0
    for i in range(len(s)):
        if s[i] == "C":
            c += 1
        elif s[i] == "N":
            n += 1
        else:
            d += 1
    c = 2*c+d
    n = 2*n+d
    if c>n:
        print(60*value)
    elif c<n:
        print(40*value)
    else:
        print(55*value)