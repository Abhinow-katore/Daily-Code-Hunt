#include <bits/stdc++.h>
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int max_count = 1;
        int val = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                max_count++;
            }
            if (max_count >= 3)
            {
                val = arr[i];
                break;
            }
            if (arr[i] != arr[i + 1])
                max_count = 1;
        }
        if(val==0)cout<<"-1"<<"\n";
        else cout<<val<<"\n";
    }

    return 0;
}