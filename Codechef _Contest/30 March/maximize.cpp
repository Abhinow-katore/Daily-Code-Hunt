#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bol;
    cin >> bol;
    while (bol--)
    {
        int n;
        cin >> n;
        string val;
        cin >> val;
        vector<vector<int>> bafelo;

        for (int w = n - 1; w >= 0; w--)
        {
            if (val[w] == '0')
            {
                int x = w + 1;
                for (int j = 0; j <= w; j++)
                {
                    if (val[j] == '1')
                        val[j] = '0';
                    else
                        val[j] = '1';
                }
                bafelo.push_back({1ll, x});
            }
        }
        int siz = bafelo.size();
        cout << siz << endl;
        for (auto x : bafelo)
            cout << x[0] << " " << x[1] << endl;
    }
    return 0;
}