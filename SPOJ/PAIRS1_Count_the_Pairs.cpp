#include <iostream>
#include <stdio.h>
using namespace std;

int fun(int arr[], int n, int k)
{
    /* code */
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */

        for (int j = i; j < n; j++)
        {
            /* code */

            if (abs(arr[i] - arr[j]) == k)
            {
                /* code */
                count = count + 1;
            }
        }
    }
    return count;
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << fun(arr, n, k);
    return 0;
}