#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    
    if (n==0 || n==1)
        return n;
 
    int temp[n];
 
    int j = 0;
    for (int i=0; i<n-1; i++)
 
        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];

    temp[j++] = arr[n-1];
 

    for (int i=0; i<j; i++)
        arr[i] = temp[i];
 
    return j;
}

int main()
{
    int len1, len2, k;
    cin >> len1;
    int arr1[len1];

    int maxCount = 0;
    int minCount = 0;
    for (int i = 0; i < len1; i++)
    {
        cin >> arr1[i];
    }
    cin >> len2;
    int arr2[len2];
    for (int i = 0; i < len2; i++)
    {
        cin >> arr2[i];
    }
    cin >> k;
    sort(arr1, arr1 + len1);
    sort(arr2, arr2 + len2);
    len1= removeDuplicates(arr1, len1);
    len2= removeDuplicates(arr2, len2);

    for (int i = 0; i < len1; i++)
    {
        if (arr1[i] > k)
        {
            maxCount = maxCount + 1;
        }
    }
    for (int i = 0; i < len1; i++)
    {
        if (arr1[i] < k)
        {
            minCount = minCount + 1;
        }
    }

    if (maxCount > minCount)
    {
        cout << maxCount;
    }
    else
    {
        cout << minCount;
    }

    return 0;
}