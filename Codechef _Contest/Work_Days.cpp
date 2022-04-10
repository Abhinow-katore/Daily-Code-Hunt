#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned int ui;
typedef unsigned long long int ul;

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdin);

#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ul num;
    cin >> num;
    while (num--)
    {
        ll a, b, p, q;

        cin >> a >> b >> p >> q;

        if ((p % a == 0) && (q % b == 0))
        {

            ll x = p / a, y = q / b;

            if ((x - y) == 1 || (y - x) == 1 || (x - y) == 0 || (y - x) == 0)
                cout << "YES\n";

            else
                cout << "NO\n";
        }

        else
            cout << "NO\n";
    }
    return 0;
}