#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    int arr[m][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = arr[j][i];
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}