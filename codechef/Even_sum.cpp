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
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            if (arr[i] % 2 != 0)
            {
                odd++;
            }
        }
        if (odd % 2 == 0)
        {
            cout << "1"
                 << "\n";
        }
        else
        {
            cout << "2"
                 << "\n";
        }
    }

    return 0;
}