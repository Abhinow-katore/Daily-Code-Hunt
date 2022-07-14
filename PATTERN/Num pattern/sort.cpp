#include <bits\stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int k = 3;
    int arr[8] = {2,5,6,4,1,3,9,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int l = 0; l < k; l++)
    {
        for (int j = 0; j < k - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int a = arr[j];
                int b = arr[j + 1];
                arr[j] = b;
                arr[j + 1] = a;
            }
        }
    }
    for (int i = k; i < n; i++)
    {
        for (int j = k; j < n - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int a = arr[j];
                int b = arr[j + 1];
                arr[j] = b;
                arr[j + 1] = a;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}