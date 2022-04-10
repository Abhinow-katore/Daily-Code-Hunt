#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

string space(int d)
{
    string result;
    for (int i = 0; i < d; ++i)
    {
        result = result + " ";
    }
    return result;
}
int f(int n, int d)
{
    cout << space(d) << "n=" << n << " begin"
         << "\n";
    if (n > 1)
    {
        f(n / 2, d + 1);
        cout << d + 1 << " hi"
             << "\n";
        f(n / 2, d + 1);
    }
    cout << d << "n=" << n << " end"
         << "\n";
}

int main()
{
    f(4, 0);
    return 0;
}
