#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int operation = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == (arr[0] + n - 1))
        {
            continue;
        }
        if (arr[i] == arr[i + 1] - 1)
        {
            continue;
        }
        

        if (arr[i] != arr[i + 1] - 1)
        {
            arr[i + 1] = arr[i] + 1;
            operation = operation + 1;
            cout << arr[i] << " ";
            cout << operation << "\n";
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}