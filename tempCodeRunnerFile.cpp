#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int len1, len2, k;
    cin >> len1;
    int arr1[len1];
    int arr2[len2];
    int maxCount = 0;
    int minCount = 0;
    for (int i = 0; i < len1; i++)
    {
        cin >> arr1[i];
    }
    cin >> len2;
    for (int i = 0; i < len2; i++)
    {
        cin >> arr2[i];
    }
    cin >> k;
    for (int i = 0; i < len1; i++)
    {
        if (arr1[i] > k)
        {
            maxCount = maxCount + 1;
        }
    }
    for (int i = 0; i < len1; i++)
    {
        if (arr1[i] < 9)
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