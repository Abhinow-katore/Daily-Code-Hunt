#include <bits/stdc++.h>

using namespace std;

bool isvowel(char aa)
{
    if (aa == 'a' || aa == 'e' || aa == 'i' || aa == 'o' || aa == 'u')

    return true;
    return false;
}
int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int n, i, j, k, wcount = 0, bcount = 0, ans = 1e9;

        int x, y;

        cin >> n;
        string s, p;

        cin >> s >> p;
        for (char i = 'a'; i <= 'z'; i++)
        {
            string ss = s;
            int count = 0;
            string pp = p;
            for (int j = 0; j < n; j++)
            {
                if (ss[j] == '?')
                {
                    ss[j] = i;
                }
                if (pp[j] == '?')
                {
                    pp[j] = i;
                }
            }
            for (int j = 0; j < n; j++)
            {
                if (ss[j] == pp[j])
                {
                    continue;
                }

                if (isvowel(ss[j] != isvowel(pp[j])))
                {
                    count = count + 1;
                }
                else
                {
                    count = count + 2;
                }
            }
            ans = min(ans, count);
        }
        cout << ans << endl;
    }
    return 0;
}