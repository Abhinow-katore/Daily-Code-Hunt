#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int j = 0; j < test; j++)
    {
        int n;
        cin >> n;
        int arr[n];
        int diff=0;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<arr[i]<<"\n";
        // }
        x = arr[1] - arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            diff = arr[i + 1] - arr[i];

            if ( diff< x )
            {
                x = diff;
            }
        }
        cout << x << "\n";
    }

    return 0;
}
// 1 10 11 12 13

// 9 1 1 1