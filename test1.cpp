#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n = 64;
    int k = 0;
    int j = 0;
    for (int i = n / 2; i <= n; i++)
    {
        for (int j = 2; j <= n; j = j * 2)
        {
            k = k + n / 2;
            cout<<"N/2"<<" ";
        }
        cout<<" \n";
    }
    cout << k;

    return 0;
}