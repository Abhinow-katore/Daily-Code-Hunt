#include <algorithm>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int arr1[n];
    int add = 0;
    int bad = 0;
    int output = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr1[i] = arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr1[i])
        {
            add = add + arr[i];
        }
        if (arr[i] != arr1[i])
        {
            bad = bad + arr[i];
        }
    }
    output = add - bad;
    cout << output;

    return 0;
}