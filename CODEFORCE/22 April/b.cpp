#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int k = 0; k < test; k++)
    {
        int n;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            vec.push_back(val);
        }
        int sub = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sub = vec[i + 1] - vec[i] + sub - 1;
        }
        if (sub <= 2)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}