#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    // for (int i = 0; i < str.length(); i++)
    // {
    //     cin>>str[i];
    // }
    string str_new = "";

    for (int i = str.length() - 1; i >= 0; i--)
    {
        str_new = str_new + str[i];
    }

    cout << str_new;

    return 0;
}

