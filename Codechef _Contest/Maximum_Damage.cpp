#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int x = 0;
    int arr1[n*n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        x = arr[i];
        for (int j = i; j < n; j++)
        {
            x = x & arr[j + 1];
            arr1[j] = x;
        }
    }
    for (int i = 0; i < n*n; i++)
    {
        cout << arr1[i] << "\n";
    }

    return 0;
}