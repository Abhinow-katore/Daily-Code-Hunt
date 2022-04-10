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
        int value = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());

        for (int i = 0; i < n; i++)
        {
            int x = 0;
            if (arr[i] == arr[0])
            {
                continue;
            }
            if (arr[0] > arr[i])
            {
                for (int j = i; j < n; j++)
                {
                    x = arr[0] - arr[j];
                    arr[j] = x + arr[j];
                }
            }
            value = value + x;
        }
        cout << value<<"\n";
    }

    return 0;
}