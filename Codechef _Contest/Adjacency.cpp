#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int k = 0; k < test; k++)
    {
        int n;
        cin >> n;
        int arr[n];
        int even_count = 0;
        int odd_count = 0;
        int new_arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {

            if (arr[i] % 2 == 0)
            {
                new_arr[even_count] = arr[i];
                even_count = even_count + 1;
            }
            if (arr[i] % 2 != 0)
            {
                new_arr[n - odd_count - 1] = arr[i];
                odd_count = odd_count + 1;
            }

            if (even_count == n or odd_count == n)
            {
                cout << "-1"
                     << "\n";
                break;
            }
        }
        if (even_count != n and odd_count != n)
        {
            for (int j = 0; j < n; j++)
            {
                cout << new_arr[j] << " ";
            }
        }
    }

    return 0;
}