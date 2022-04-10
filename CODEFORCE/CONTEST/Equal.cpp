#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int j = 0; j < test; j++)
    {
        string var;
        cin >> var;
        int count = 0;
        for (int i = 0; i < var.size(); i++)
        {
            if (var[i] == 'E')
            {
                count = count + 1;
            }
        }
        if (count != var.size() - 1)
        {
            cout << "YES"
                 << "\n";
            //  continue;
        }

        if (count == var.size() - 1)
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}