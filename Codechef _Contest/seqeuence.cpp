#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()

{

    ll t;

    cin >> t;

    while (t--)

    {

        ll n, i, pi;

        cin >> n;
        vector<int> a, e, o;
        for (i = 0; i < n; i++)

        {

            cin >> pi;
            a.push_back(pi);
        }

        for (i = 1; i < n; i += 2)
        {
            e.push_back(a[i - 1]);

            o.push_back(a[i]);
        }
        if (i == n)

            e.push_back(a[i - 1]);

        sort(e.begin(), e.end(), greater<int>());
        sort(o.begin(), o.end());

        ll first = 0, ans = 0;
        for (i = 0; i < n / 2; i++)
        {

            cout << e[i] << " ";

            cout << o[i] << " ";
            first += e[i];

            ans + first *o[i];
        }

        if (i < e.size())
            cout << e[i];
        cout << "\n"
             << ans << "\n";
    }
    return 0;
}