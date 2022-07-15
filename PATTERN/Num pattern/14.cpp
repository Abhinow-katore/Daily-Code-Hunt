#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n = 7;
    for (int i = 1; i <= n; i++)
    {
        // cout<<i+1;
        int pos = i;
        for (int j = 1; j <= i; j++)
        {
            cout << pos << " ";
            // cout<<n+i-j<<" ";
            pos = pos +n -j;
        }
        cout << "\n";
    }

    return 0;
}