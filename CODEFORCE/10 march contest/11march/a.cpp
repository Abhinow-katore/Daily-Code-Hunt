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
        int flag = 0;
        if (n % 3 == 0)
        {
            flag = 1;
            // cout<<flag;
        }
        if (n == 2)
        {
            cout << "2"
                 << "\n";
            continue;
        }
        if (n == 1)
        {
            cout << "1"
                 << "\n";
            continue;
        }
        if (n % 3 != 0 && n % 2 == 0)
        {
            flag = 2;
            // cout<<flag;
            for (int i = 1; i < n / 2; i++)
            {
                cout << "12";
            }
            cout << "1"<<"\n";
        }

        if (flag = 1)
        {
            int bol = 0;
            if (n == 3)
                bol = 1;
            for (int i = 0; i < ((n - 3) / 2) + bol; i++)
            {
                cout << "12";
                cout<<"hlo";
            }
            cout << "\n";
        }
        if (n % 3 != 0 && n % 2 != 0)
        {
            for (int i = 1; i < n / 2; i++)
            {
                cout << "21";
            }
            cout << "1"
                 << "\n";
        }
    }

    return 0;
}