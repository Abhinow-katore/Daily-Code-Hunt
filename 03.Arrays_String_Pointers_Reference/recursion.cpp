#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

void recur(int arr[], int n, int length)
{
    int diff = 0;
    int sum = 0;
    string value;

    if (length == 1)
    {
        // value = "No";
        cout << "YES";
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i; j < n - 1; j++)
            {
                if (j - i <= 1)
                {
                    sum = i + j;
                    arr[i] = sum;
                }
                if (j - i > 1)
                {
                    cout << "NO";
                    
                }
            }
        }
        length = n / 2;
        return recur(arr, n / 2, length);
    }
}

int main()
{
    int x;
    cin >> x;
    int n;
    n = pow(2, x);
    int arr[n];

    int length = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    // int *ptr = arr;
    recur(arr, n, length);

    return 0;
}