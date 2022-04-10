val = int(input())
for j in range(val):
    sub=int(input())
    value=list(str(sub))
    if sum(list(map(int,value)))%2==0:
        while(sum(list(map(int,value)))%2==0):
            sub=sub+1 
            x=sub
            value=list(str(x))
        print(sub)
    else:
        while(sum(list(map(int,value)))%2!=0):
            sub=sub+1 
            y=sub
            value=list(str(y))
        print(sub)