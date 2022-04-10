#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int t = 0;
    int value = 0;
    t = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
    {

        arr[i] = arr[i - 1];
    }
    arr[0] = t;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}