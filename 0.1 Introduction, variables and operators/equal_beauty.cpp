#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"
#define ll long long

int main()
{
    IOS;
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;

        ll m = INT_MAX;
        ll ans_1 = 0, ans_2 = 0, d1, d2;

        for (int i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        ll l = 1, r = n - 2;

        if (n == 2)
        {
            cout << 0 << "\n";
            continue;
        }
        else if (n == 3)
        {
            cout << min(v[2] - v[1], v[1] - v[0]) << endl;
            continue;
        }

        for (ll i = 0; i < n - 1; ++i)
        {
            ans_1 += abs(v[i] - v[(n - 1) / 2]);
        }
        for (int i = 1; i < n; ++i)
        {
            ans_2 += abs(v[i] - v[1 + (n - 1) / 2]);
        }

        m = min(ans_1, ans_2);

        while (l < r)
        {
            ll d2 = v[n - 1] - v[l], d1 = v[r] - v[0];
            m = min(m, abs(d1 - d2));
            if (d1 < d2)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        cout << m << endl;
    }
    return 0;
}