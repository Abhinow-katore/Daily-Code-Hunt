#include <iostream>
#include <stdio.h>
using namespace std;

int max(int arr[], int n)
{
    int large = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            /* code */
            arr[i + 1] = arr[i];
        }
        large = arr[i];
    }
    return large;
}

int min(int arr[], int n)
{
    int small = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            /* code */
            arr[i + 1] = arr[i];
        }
        small = arr[i];
    }
    return small;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << max(arr, n) << "\n";
    cout << min(arr, n);
    

    return 0;
}