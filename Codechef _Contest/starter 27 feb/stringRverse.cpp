#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int w = 0; w < test; w++)
    {
        string str;
        cin >> str;
        int n = str.length();
        int count = 0;
        int diff = 0;
        for (int i = 0; i < str.length() / 2; i++)
        {
            // cout<<"i->"<<i<<"\n";
            // cout<<"n->"<<n<<"\n";
            if (str[i] == str[n - 1 - i])
            {
                count++;
                // cout<<count<<"\n";
            }
            if (str[i] != str[n - 1 - i])
            {
                diff = n - 2 * i - 1;
                // cout<<diff<<"\n";
                break;
            }
        }
        cout << diff + count;
    }

    return 0;
}

/////////////////////////
#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define all(v) v.begin(), v.end()
using namespace std;

void helping()
{

    string s;

    cin >> s;

    string B = s;

    reverse(all(s));

    int m = s.length(), num = B.length();
    int TIH[256];
    memset(TIH, 0, sizeof(TIH));
    for (int i = 0; i < num; i++)
        TIH[B[i]]++;
    for (int i = 0; i < num; i++)
        TIH[s[i]]--;
    int ans = 0;
    for (int i = num - 1, j = num - 1; i >= 0;)
    {
        while (i >= 0 && s[i] != B[j])
        {
            i--;
            ans++;
        }
        if (i >= 0)
        {
            i--;
            j--;
        }
    }
    cout << ans << "\n";
}

int main()
{
    long long testnumber;
    cin >> testnumber;

    for (long long i = 0; i < testnumber; i++)
    {
        helping();
    }
    return 0;
}