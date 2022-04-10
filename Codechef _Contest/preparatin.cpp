#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, N, k;
        cin >> m >> N >> k;
        int x = N * k;
        
        if (x < m)
        {
            cout << "YES"
                 << "\n";
        }
        if (x>=m)
        {
            cout << "NO"
                 << "\n";
        }
        
            
    }

    return 0;
}