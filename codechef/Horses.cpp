#include <iostream>
#include <stdio.h>
using namespace std;
int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int sorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
    }
}

int diff(int arr[], int n)
{
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        if (value == 0)
        {
            value = arr[i + 1] - arr[i];
        }

        if (value < arr[i + 1] - arr[i])
        {
            continue;
        }

        if (arr[i + 1] - arr[i] < value)
        {
            value = arr[i + 1] - arr[i];
        }
    }
    return value;
}

int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sorted(arr, n);
        cout << diff(arr, n)<<"\n";
    }

    return 0;
}