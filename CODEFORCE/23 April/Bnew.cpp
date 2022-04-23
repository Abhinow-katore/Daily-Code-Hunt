// CPP code to illustrate
// erase(size_type idx, size_type len )
#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

// Driver code
int main()
{
    int test;
    cin >> test;
    for (int k = 0; k < test; k++)
    {
        string str;
        cin >> str;
        // int i = 0;
        if (str.length() < 2)
        {
            cout << "NO"
                 << "\n";
            continue;
        }
        if (str[0] == 'B' || str[str.length() - 1] == 'A')
        {
            cout << "NO"
                 << "\n";
            continue;
        }
        // if (str[0] != str[str.length() - 1])
        // {
        //     str.erase(0, 1);
        //     str.erase(str.length() - 1, 2);
        // }

        // cout<<str<<"\n";
        vector<int> l(str.size());
        vector<int> m(str.size());

        //////////////
        int num = 0;
        bool point = false;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'A')
            {
                num = num + 1;
            }
            l[i] = num;
        }

        num = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'B')
            {
                num = num + 1;
            }
            m[i] = num;
        }
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'A')
                continue;
            else if (m[i] > l[i])
            {
                point = true;
            }
        }
        /////////////
        // cout<<str;
        // string val = str;
        // sort(val.begin(), val.end());
        // if (str.length() == 0 || val[val.length() - 1] == 'B')
        //     cout << "NO"
        //          << "\n";
        // else
        //     cout << "YES"
        //          << "\n";
        if (point)
            cout << "NO"
                 << "\n";
        else
            cout << "YES"
                 << "\n";
    }
    return 0;
}