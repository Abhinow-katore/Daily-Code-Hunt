#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, m;
        cin >> n >> m;
        if (min(m, n) == 1 && max(m, n) >2)
        {
            cout << "-1"<<"\n";
            continue;
        }
        if (n == m)
        {
            cout << n * 2 - 2<<"\n";
            continue;
        }
        else
        {
            int x = max(m, n) - min(m, n);
            // cout<<x<<" ";
            int val = 0;
            if (x % 2 == 0)
            {
                val = x * 2;
            }
            else
            {
                val = x * 2 - 1;
            }
            cout << (min(m, n) * 2) - 2 + val<<"\n";
        }
    }

    return 0;
}