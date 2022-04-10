#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n], B[n], new_arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    sort(B, B + (n));
    for (int i = 0; i < 2 * n; i++)
    {
        A[i] = B[i];
    }

    for (int i = 0; i < n; i++)
    {
        int Tot = 0;
        int num = 0;
        int median = 0;

        for (int j = 0; j < i + 1; j++)
        {

            cout << A[j] << " ";
            Tot = A[j] + Tot;

            num = num + 1;
        }

        median = Tot / num;

        cout << "median:" << median << " ";
        cout << "\n";
        // new_arr[i] = median;
    }
    for (int i = 0; i < 2 * n; i++)
    {
        // cout << new_arr[i] << " ";
    }

    return 0;
}