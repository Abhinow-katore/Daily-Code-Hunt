
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int repet;
    cin >> repet;
    for (int k = 0; k < repet; k++)
    {
        long long n;
        cin >> n;
        vector<long long> inner_part(n);
        long long solved = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> inner_part[i];
            solved += inner_part[i];
        }
        long long x = 1, final = 0;
        while (solved > 0)
        {
            solved -= x;
            final += 1;
            x += 1;
        }
        if (solved < 0)
            cout << final - 1 << "\n";
        else
            cout << final << "\n";
    }
    return 0;
}