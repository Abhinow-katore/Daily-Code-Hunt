#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    ll number;
    cin >> number;
    while (number--)
    {
        ll val, x, y;
        ll first = 0;
        ll second = 0;
        string s;
        cin >> val >> x >> y >> s;
        for (ll i = 0; i < val; i++)
        {
            if (s[i] == '1')
            {
                first++;
            }
            if (s[i] == '0')
            {
                second++;
            }
        }
        if (x > y)
        {
            sort(s.begin(), s.end(), greater<int>());
            if (first > 0 && second > 0)
            {
                cout << y << "\n";
            }
            else
            {
                cout << "0"
                     << "\n";
            }
        }
        else
        {
            sort(s.begin(), s.end());
            if (first > 0 && second > 0)
            {
                cout << x << "\n";
            }
            else
            {
                cout << "0"
                     << "\n";
            }
        }
    }
    return 0;
}