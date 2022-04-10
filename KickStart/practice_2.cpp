#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int k = 0; k < test; k++)
    {
        string str;
        cin >> str;
        int flag = 0;
        int n = str.length();
        string vowel = "AEIOUaeiou";
        // string end = str[2];
        for (int i = 0; i < 11; i++)
        {
            if (str[n - 1] == 'y' or str[n - 1] == 'Y')
            {
                cout << "Case #" << k+1 << str << " is ruled by nobody."
                     << "\n";
                     flag = 1;
                     break;

            }
            if (str[n - 1] == vowel[i])
            {
                cout << "Case #" << k+1 << str << " is ruled by Alice."
                     << "\n";
                     flag = 1;
            }
        }

        if (flag == 0)
        {
            cout << "Case #" << k+1 << str << " is ruled by Bob."
             << "\n";
        }
        
    }

    return 0;
}