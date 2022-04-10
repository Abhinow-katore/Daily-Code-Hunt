#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    string s = "na";
    string t = "apna college";
    int S = s.size(), T = t.size();
    for (int i = 0; i < T - S + 1; i++)
    {
        if (t.substr(i, S) == s)
        {
            /* code */
            cout << "Found" << i << "\n";
        }
    }

    return 0;
}
///////////////////Time complexity O(N*N*N)
