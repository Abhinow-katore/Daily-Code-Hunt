from collections import defaultdict
val = 1
y = int(input())
for i in range(y):
    flagg = defaultdict(lambda:0)
    count, finalize = int(input()), val - val
    solve = list(map(int, input().split()))
    for sum in solve:
        flagg[sum] += val
    for sum in flagg.keys():
        if flagg[sum] % (val + val) != (val - val):
            finalize += val
    ans = len(solve) + finalize
    while ans % (val + val + val + val) != (val - val):
        ans += val
        finalize += val
    print(finalize)