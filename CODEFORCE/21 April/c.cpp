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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int even = 0;
        int odd = 0;
        int not_even = 0;
        int not_odd = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (arr[i] % 2 != 0)
                {
                    odd++;
                }
                else
                {
                    not_odd++;
                }
            }
            if (i % 2 != 0)
            {
                if (arr[i] % 2 == 0)
                {
                    even++;
                }
                else
                    not_even++;
            }
        }

        // cout << odd << " " << not_odd << "\n";
        // cout << even << " " << not_even << "\n";
        if ((odd > 0 && not_odd > 0) || (even > 0 && not_even > 0))
            cout << "NO"
                 << "\n";
        else
        {
            cout << "YES"
                 << "\n";
        }
    }

    return 0;
}