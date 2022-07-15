#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout<<"\n";
    }
    for (int i = 1; i <= 7; i++)
    {
        int pos= 1;
        for (int j = i; j <= 7; j++)
        {
            cout << pos;
            pos++;
        }
        cout << "\n";
    }

    return 0;
}