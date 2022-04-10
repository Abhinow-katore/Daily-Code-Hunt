
def mergeIntervals(intervals,result):
        intervals.sort(key = lambda x: x[0])
        m = []
        s = -10000
        max = -100000
        
        for i in range(len(intervals)):
            a = intervals[i]
            if a[0] > max:
                if i != 0:
                    m.append([s,max])
                max = a[1]
                s = a[0]
            else:
                if a[1] >= max:
                    max = a[1]
 
        if max != -100000 and [s, max] not in m:
            m.append([s, max])
        print("The Merged Intervals are :", end = " ")
        for i in range(len(m)):
            result = m[i]
            return result
            # print(m[i], end = " ")
 
# Driver code
# intervals = [[7, 7], [2, 3], [6, 11], [1, 2]]
mergeIntervals(intervals,result)
print(result)
 
# This code is contributed
# by thirumalai srinivasan