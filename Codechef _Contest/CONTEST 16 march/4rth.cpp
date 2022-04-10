#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int test;
    cin >> test;
    for (int j = 0; j < test; j++)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        string newString = str;
        sort(newString.begin(), newString.end());
        int pass = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (str[i] == newString[i])
                swap(str[i], newString[n - i - 1]);

            if (str == newString)
                cout << "YES"
                     << "\n";
            else
                cout << "NO"
                     << "\n";
        }
    }

    return 0;
}
