#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int p = 0; p < test; p++)
    {
        int n, m;
        cin >> n >> m;
        string S;
        int size = 0;
        int count = 0;
        if (n > m)
        {
            for (int i = 0; i <= m; i++)
            {
                S.append("01");
                count = count + 1;
            }
            for (int i = 0; i < (n - count); i++)
            {
                S.append("001");
            }
            S.append("0");
            cout << S.length();
            cout << "\n";
            cout << S;
        }
        if (n < m)
        {
            for (int i = 0; i <= n; i++)
            {
                S.append("10");
                count = count + 1;
            }
            for (int i = 0; i < (m - count); i++)
            {
                S.append("110");
            }
            S.append("1");
            cout << S.length();
            cout << "\n";
            cout << S;
        }
        if (n == m)
        {
            for (int i = 0; i <= n; i++)
            {
                S.append("10");
            }
            // S.append("1");
            cout << S.length();
            cout << "\n";
            cout << S;
        }
    }

    return 0;
}