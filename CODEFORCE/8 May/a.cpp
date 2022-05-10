#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int k = 0; k < test; k++)
    {
        int n;
        cin >> n;
        int arr[n];
        int flag = 0;
        int zero = 0;
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                count++;
        }
        int val = 0;
        if (count > 0)
        {
            cout << n - count<<"\n";
            continue;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                val++;
            }
        }
        if (val > 0)
            cout << n << "\n";
        else
            cout << n + 1 << "\n";
    }

    return 0;
}