#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int hash[*max_element(arr, arr + n) + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            hash[arr[i]]++;
        }

        // for (int i = 1; i < *max_element(arr, arr + n) + 1; i++)
        // {
        //     cout << hash[i] << " ";
        // }
        // cout << "\n"
        //      << "-----------"
        //      << "\n";
        int i = 0;

        // int val[]
        // cout<<*max_element(arr, arr + n);
        int hash_max = *max_element(arr, arr + n);
        // cout << "\n";
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << "\n";
        int pos = 0;
        int ans = 0;
        while (pos <= hash_max)
        {
            if (k > 0 && hash[pos] > 1)
            {
                k--;
                ans++;
                hash[pos]--;
                continue;
            }
            pos++;
        }

        for (int i = 1; i < *max_element(arr, arr + n) + 1; i++)
        {
            // cout << hash[i] << " ";
            if (hash[i] == 1)
            {
                ans++;
            }
        }

        for (int i = 1; i < *max_element(arr, arr + n) + 1; i++)
        {
            // cout << hash[i] << " ";
            if (hash[i] > 1)
            {
                int temp = hash[arr[i]] * (hash[arr[i]] - 1) / 2;
                ans = ans + temp;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}