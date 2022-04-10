#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int val;
    cin >> val;
    for (int i = 0; i < val; i++)
    {
        int doubt;
        cin >> doubt;
        int ans = 0;
        if (doubt % 4 == 0)
            ans = doubt / 4;
        else
            ans = (doubt / 4) + 1;
        cout << ans << "\n";
    }
    return 0;
}