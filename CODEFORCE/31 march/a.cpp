#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0)
            {cout << '1' << "\n";
            continue;}
        if (b == 0)
            {cout << a + 1 << "\n";
            continue;}
        if (a > 0 && b > 0)
        {
            cout << a + (b * 2) + 1 << "\n";
        }
    }

    return 0;
}