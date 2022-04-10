testA=int(input()) 
for i in range(testA):
    str=input()
    c=input()

    a=0

    l=[]

    for i in str:
        a+=1
        if c == i:
            l.append(a)
            a=0

    ans=0

    for k in 1:

        if k%2!=0:

            ans+=1

    if ans>0:
        print("YES")

    else:
        print("NO")