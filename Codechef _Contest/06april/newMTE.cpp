#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int repet;
    cin >> repet;
    for (int p = 0; p < repet; p++)
    {
        int w;
        int v = 0;
        int nv = 0;
        int ans = 0;
        cin >> w;
        int arr[w];
        for (int i = 0; i < w; i++)
        {
            cin >> arr[i];
            ans = ans + arr[i];
            if (arr[i] & 1)
            {
                v = v + 1;
            }
            else
                nv = nv + 1;
        }
        int s = min(v / 2, nv);
        if (ans & 1)
            cout << nv << "\n";
        else
            cout << s << "\n";
    }

    return 0;
}