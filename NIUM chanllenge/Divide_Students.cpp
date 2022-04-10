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
        int unique_count = 0;
        int same = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                unique_count = unique_count + 1;
            }
            if (arr[i] == arr[i + 1])
            {
                same = same + 1;
            }
        }
        // cout << unique_count << "\n";
        // cout << same;
        if (unique_count == 12)
        {
            cout << "yes"
                 << "\n";
        }
        if (unique_count < 12)
        {

            if (same >= 12)
            {
                cout << "yes"
                     << "\n";
            }
            if (same < 12)
            {
                cout << "no"
                     << "\n";
            }
        }
    }
    return 0;
}