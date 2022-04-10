#include <iostream>
#include <stdio.h>
using namespace std;

int max(int arr[], int n)
{
    int ans = arr[0];
    for (int i = 0; i < n; i++)

    {
        if (arr[i] > ans)
        {
            /* code */
            ans = arr[i];
        }
    }
    return ans;
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
    cout << max(arr, n);
    return 0;
}