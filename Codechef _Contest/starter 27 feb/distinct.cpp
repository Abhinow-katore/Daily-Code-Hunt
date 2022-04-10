#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int num;
    string s;
    cin >> num >> s;
    int c = 1;
    for (int i = 1; i < num; i++)
    {
        if (s[i - 1] != s[i])
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}

int main()
{
    int testingNumber;
    cin >> testingNumber;
    while (testingNumber--)
    {
        solve();
    }
}