#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count_0 = 0;
    int count_1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[0] == '1')
        {
            continue;
        }
        if (s[i] == '0')
        {
            count_0++;
        }
        if (s[i] == '1')
        {
            count_1++;
        }
    }
    if (s[n - 1] == '1')
    {
        count_1 = count_1 - 1;
    }
    cout << (count_0 * 2) - count_1 - 1;

    return 0;
}