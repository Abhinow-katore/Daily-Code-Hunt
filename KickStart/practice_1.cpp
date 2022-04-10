#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int l = 0; l < test; l++)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.length() / 2; i++)
        {
            if (s[i] == s[n - i - 1])
            {
                continue;
            }
            if (s[i] != s[n - i - 1])
            {
                count++;
                // cout<<"s[i]:"<<s[i];
            }
        }
        // cout<<count;
        if (k <= count)
        {
            cout << "0"
                 << "\n";
        }
        else
        {
            cout << k - count << "\n";
        }
    }

    return 0;
}