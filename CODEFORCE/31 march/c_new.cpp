#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int j = 0; j < test; j++)
    {
        string str;
        cin >> str;
        int flag = 0;
        int count = 0;
        for (int i = 0; i < str.length() - 1; i++)
        {
            if (str[i] == str[i + 1] && flag == 0)
            {
                i++;
                continue;
            }
            if (str[i] != str[i + 1] && flag == 0)
            {
                string s = str[i];
                flag = 1;
            }
            if (s != str[i + 1] && flag == 1)
            {
                count++;
            }
            if (s == str[i + 1] && flag == 1)
            {
                flag = 0;
            }
        }
        cout << count < "\n";
    }

    return 0;
}