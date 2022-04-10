#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int pos1, pos2;
    // int

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            arr[i][j] = (i * 10) + j;
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    int inc = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            
        }
    }

    return 0;
}