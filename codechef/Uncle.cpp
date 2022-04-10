#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        int val;
        int loc = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int k;
        cin >> k;
        val = arr[k-1];
        // cout<<val<<"val"<<"\n";
        sort(arr, arr + n);
        for (int w = 0; w < n; w++)
        {
            if (val == arr[w])
            {
                loc = w+1;
            }
        }
        cout << loc << "\n";
    }

    return 0;
}