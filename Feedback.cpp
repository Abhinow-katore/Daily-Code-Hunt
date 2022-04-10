#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int l = 0; l < test; l++)
    {
        string n;
        cin >> n;
        for (int i = 1; i < n.size() - 1; i++)
        {
            if (n[i] != n[i - 1] && n[i] != n[i + 1])
            {
                cout << "Good"
                     << "\n";
            }
            else
            {
                cout << "Bad"
                     << "\n";
            }
        }
    }

    return 0;
}