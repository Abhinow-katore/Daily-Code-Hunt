#include <iostream>
#include <stdio.h>
using namespace std;
const int n = 2, m = 3;

void print(int arr[m][n]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "\t" << arr[i][j];
        }
    }
}
int main()
{
    int arr[m][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    print(arr);
    



    return 0;
}