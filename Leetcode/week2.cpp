#include <bits/stdc++.h>
using namespace std;

int hostelRoom(string &s)
{
    int count = 0;
    int value = 0;
    // r position
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'R')
        {
            value = i;
        }
    }
    // total R
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'R')
        {
            count++;
        }
    }
    int compareCount = 0;
    int addUp = 0;
    if (count % 2 != 0)
        return 0;
    else
    {
        for (int i = value; i < s.length(); i++)
        {
            if (s[i] == 'R')
            {
                int j = i + 1;
                compareCount++;
                while (s[j] != 'R')
                {
                    if (s[j] == 'R')
                    {
                        i = j;
                        compareCount++;
                        break;
                    }
                }
                continue;
            }
            if (s[i] == 'W' && compareCount <= count)
            {
                addUp++;
            }
        }
    }
    return addUp;
    // solve here
}

int main()
{
    string s;
    cin >> s;
    cout << hostelRoom(s);
}
