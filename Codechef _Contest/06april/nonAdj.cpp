#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    string len;
    int val;
    int first = 0, second = 0;
    cin >> val >> len;
    for (int i = 0; i < val; i++)
    {
        if (len[i] == '1')first++;
    }
    for (int i = 0; i < val - 1; i++)
    {
        if (len[i] == '1' && len[i + 1] == '1')
            second++;
    }
    if (second != 0 && first != 0)
        cout << 2 << "\n";
    else if (second == 0 && first != 0)
        cout << 1 << "\n";
    else if (first == 0)
        cout << 0 << "\n";

    return 0;
}