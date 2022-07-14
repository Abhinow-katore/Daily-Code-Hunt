#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    // cin >> n;
    n=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i+j+1 == n)
                cout << "*";
            else
            {
                cout << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}