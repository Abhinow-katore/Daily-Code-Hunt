#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int j = 0; j < test; j++)
    {
        int l, r, a;
        cin >> l >> r >> a;
        int max_Sum = 0;
        int pos = 0;
        for (int i = l; i <= r; i++)
        {
            int val = i % a;
            if (val >= max_Sum)
            {
                max_Sum = val;
                pos = i;
            }
        }
        int ans = pos / a;
        int fin = pos % a;
        cout << ans + fin << "\n";
    }

    // cout<<pos;

    return 0;
}