#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

string space(int d)
{
    string result;
    for (int i = 0; i < d; ++i)
    {
        result = result + "_";
    }
    return result;
}
void f(int n, int d)
{
    cout << space(d) << "n=" << n << " begin"<< "\n";
    if (n > 1)
    {
        f(n / 2, d + 1);
        cout <<space(d) << " hi"<< "\n";
        f(n / 2, d + 1);
    }
    cout << space(d) << "n=" << n << " end"<< "\n";
}

int main()
{
    int n,d;
    cin>>n>>d;
    f(n, d);
    return 0;
}



