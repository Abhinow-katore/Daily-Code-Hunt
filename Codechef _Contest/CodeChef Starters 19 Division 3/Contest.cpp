#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int x, y, p, q;
        cin >> x >> y >> p >> q;
        int t1;
        int t2;
        t1 = x + p * 10;
        t2 = y + q * 10;
        if (t1 > t2)
        {
            cout << "Chefina"
                 << "\n";
        }
        if (t2 > t1)
        {
            cout << "Chef"
                 << "\n";
        }
        if (t1 == t2)
        {
            cout << "Draw"
                 << "\n";
        }
    }

    return 0;
}