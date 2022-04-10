#include <bits/stdc++.h>
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
        int value = 0;
        int new_arr[n];
        int pass = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        new_arr[0] = arr[0];

        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] == 1)
            {
                cout << "-1"
                     << "\n";
                pass = 1;
                break;
            }

            if (arr[i + 1] % arr[i] == 0 || arr[i] % arr[i + 1] == 0)
            {

                value = arr[i + 1] * (arr[i + 1] + 1);
                new_arr[i + 1] = value;
                cout << value << "<<value"
                     << "\n";
                continue;
            }
            if (arr[i + 1] % arr[i] != 0 || arr[i] % arr[i + 1] != 0)
            {
                cout << "-1"
                     << "\n";
                pass = 1;
                break;
            }
        }
        if (pass == 0)
        {

            for (int i = 0; i < n; i++)
            {
                cout << new_arr[i] << " ";
            }
            cout<<"\n";
        }
        
    }

    return 0;
}