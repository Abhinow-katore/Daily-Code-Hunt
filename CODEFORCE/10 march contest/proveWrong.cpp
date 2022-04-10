#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int j = 0; j < test; j++)
    {
        int n;
        cin >> n;
        vector<int> p;
        if (n > 19)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
            for (int i = 0; i < n; i++)
            {
                p.push_back(pow(3, i));
            }
            for (int i = 0; i < n; i++)
            {
                cout << p[i] << " ";
            }
            cout<<"\n";
        }
    }

    return 0;
}