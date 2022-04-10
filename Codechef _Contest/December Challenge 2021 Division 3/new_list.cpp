#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int mostFrequent(int arr[], int n)
{
    sort(arr, arr + n);

    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else
        {
            if (curr_count > max_count)
            {
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }


    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = arr[n - 1];
    }

    return max_count;
}

int main()
{
    int test;
    cin >> test;
    for (int p = 0; p < test; p++)
    {
        int n;
        cin >> n;
        int arr[n];
        int Max_count = 0;
        int ans = 0;
        int final = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n == 1 || mostFrequent(arr, n) == n)
        {
            cout << "0"
                 << "\n";
                 continue;
        }
        if (mostFrequent(arr, n) >= 2)
        {
            ans = mostFrequent(arr, n);
            final = n - ans;
            cout << final + 1 << "\n";
        }
        else
        {
            cout << "-1"
                 << "\n";
        }
    }

    return 0;
}