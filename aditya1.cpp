#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sub = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int minsub = arr[1] - arr[0];
    for (int i = 0; i < n-1; i++)
    {
        sub = arr[i + 1] - arr[i];
        if (sub <= minsub)
        {
            minsub = sub;
        }
        else
        {
            continue;
        }
    }
    cout << minsub;

    return 0;
}