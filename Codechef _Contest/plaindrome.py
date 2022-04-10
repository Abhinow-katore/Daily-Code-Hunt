def ok(numi, arr):
    for i in range(numi-1,-1,-1):
        if(arr[i]==1):
            return i+1
try:
    arr = [0 for i in range (1000)]
    for i in range (1,1001)
    st = str(bin(i)).replace("0b","") 
    if(st[::-1]==st):
        arr[i-1]=1



for i in range(int (input())):
    n = int(input())
    ans=[]

    while(n>0):        
        numi = ok(n, arr)
        ans.append(numi)
        n-=numi
    print(len(ans))
    print(*ans,sep=" ")
except:
    pass



