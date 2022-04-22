#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        if (n <= 1399)
            cout << "Division 4"
                 << "\n";
        if (n > 1399 && n <= 1599)
            cout << "Division 3"
                 << "\n";
        if (n > 1599 && n <= 1899)
            cout << "Division 2"
                 << "\n";
        if (n > 1899)
            cout << "Division 1"
                 << "\n";
    }

    return 0;
}