
#include <iostream>
#include <stdio.h>
using namespace std;

// void print(int matrix[n][m] ){

// }
 
int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    int matrix[n][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout<<"\n";
    }

    return 0;
}