#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0)
        {
            cout << "0"
                 << "\n";
            continue;
        }
        int w = (n * n) + (m * m);
        if (ceil((double)sqrt(w)) == floor((double)sqrt(w)))
        {
            cout << "1"
                 << "\n";
        }
        else
        {
            cout << "2"
                 << "\n";
        }
    }

    return 0;
}