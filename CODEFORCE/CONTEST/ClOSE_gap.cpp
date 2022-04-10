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
        int add = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            add = add + arr[i];
        }
        if (add % n == 0)
        {
            cout << "0"
                 << "\n";
        }
        if (add % n != 0)
        {
            cout << "1"
                 << "\n";
        }
    }

    return 0;
}