#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int k = 0; k < test; k++)
    {
        string s;
        cin >> s;
        int flag = 0;
        if (s[0] != s[1] || s[s.length() - 1] != s[s.length() - 2])
        {
            cout << "NO"
                 << "\n";
            flag = 1;
            // return 0;
            continue;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != s[i + 1] && s[i] == s[i + 2] && i < s.length() - 2)
            {
                cout << "NO"
                     << "\n";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "YES"
                 << "\n";
    }

    return 0;
}