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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 1)
            {
                sum = sum + arr[i] - 1;
            }
        }
        if (sum % 2 == 0)
            cout << "maomao90"
                 << "\n";
        else
            cout << "errorgorn"
                 << "\n";
    }

    // cout<<sum;
    return 0;
}