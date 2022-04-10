
 
def findMajority(arr, n):
 
    maxCount = 0
    index = -1  # sentinels
    for i in range(n):
 
        count = 0
        for j in range(n):
 
            if(arr[i] == arr[j]):
                count += 1
 
        # update maxCount if count of
        # current element is greater
        if(count > maxCount):
 
            maxCount = count
            index = i
 
    # if maxCount is greater than n/2
    # return the corresponding element
    if (maxCount > n//2):
        print(arr[index])
 
    else:
        print("No Majority Element")
 
 
# Driver code
if __name__ == "__main__":
    # arr = [1, 1, 2, 1, 3, 5, 1]
    # n = len(arr)
    n = int(input("Enter number of elements : "))
 
# Below line read inputs from user using map() function
    arr= list(map(int,input("\nEnter the numbers : ").strip().split()))[:n]
    # Function calling
    findMajority(arr, n)