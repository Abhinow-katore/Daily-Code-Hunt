#include <bits/stdc++.h>

using namespace std;
bool check(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
        return true;
    }
}

int main()
{
    int n;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    if (check(arr, n) == false)
        cout << "No";
    else
        cout << "YEs";

    return 0;
}