
val = collections.Counter()

for i, j in matches:
     val[j] + 1

sol = [0, 0]

for x in val.keys():
    if val[x] < 1:
         sol [val[x]].append(x)

sol[0].sort()

sol [1].sort()

return sol;