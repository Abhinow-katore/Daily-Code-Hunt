#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n = 10;
    int val = 0;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << val + 1;
            val = val + 1;
            // if(j!=0||j!=n-1)cout<<"*";
            if (j == i - 1)
                continue;
            else
                cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < n+1; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << val - n + j + 1;
            // if(j==n)continue;
                cout << "*";
        }
        val = val - n + i;
        cout << "\n";
    }

    return 0;
}