#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int p = 0; p < test; p++)
    {
        int n;
        cin >> n;
        int arr[n];
        int x = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        x = (arr[n - 1] - arr[0]);
        ans = x * arr[n - 2];
        cout << ans << "\n";
    }

    return 0;
}