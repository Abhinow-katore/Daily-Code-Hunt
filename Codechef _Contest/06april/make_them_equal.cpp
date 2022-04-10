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
        int count_E = 0;
        int count_O = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                count_E++;
            }
            if (arr[i] % 2 != 0)
            {
                count_O++;
            }
        }
        // cout<<count_E<<" "<<count_O;
        if (count_O > count_E)
        {
            cout << count_E<<"\n";
            continue;
        }
        if (count_O == 0 || count_O == n ||count_E==0||count_E==n)
        {
            cout << 0<<"\n";
            continue;
        }
        else
            cout << count_O / 2<<"\n";
    }

    return 0;
}