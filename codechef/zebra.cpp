#include <bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;
        int alt = 0;
        for (int i = 1; i < n; i++)
        {

            if (s[i] != s[i - 1])
                alt++;
        }
        if (alt >= k)

            for (int i = n - 1; i >= 0; i--)

            {

                if (k % 2 != 0 && s[i] != s[0])

                {
                    cout << i + 1 << "\n";

                    break;
                }

                else if (k % 2 == 0 && s[i] == s[0])
                {

                    cout << i + 1 << "\n";

                    break;
                }
            }
        else

            cout
                << -1 << endl;
    }

    return 0;