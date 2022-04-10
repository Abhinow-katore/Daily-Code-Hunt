#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int bin;
        cin >> bin;
        string s;
        cin >> s;
        if (s[s.length()] == 0)
        {
            cout << "SAHID";
        }
        if (s[s.length()] == 0)
        {
            cout << "RAMADHIR";
        }
    }

    return 0;
}