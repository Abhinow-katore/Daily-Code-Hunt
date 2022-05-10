for val in range(int (input())):
    sized = int(input())
    l = list (map (int, input().split())) 
    from collections import Counter
    total= Counter (l)
    if(0 not in total):

        count = 0
        for item in total: 
            if(total[item]>1): 
                count = 1

        if (count==1): 
            print(sized)

        else: 
            print(sized+1)
    else:
        print(sized-total[0])