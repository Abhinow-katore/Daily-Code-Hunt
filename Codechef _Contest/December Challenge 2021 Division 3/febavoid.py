for _ in range(int(input())):
    n = int(input())
    value = list(map(int,input().split()))[:n]
    c = 0
    for i in range(len(value)):
        if value[i] == (i+c+1):
            c += 1
    print(c)