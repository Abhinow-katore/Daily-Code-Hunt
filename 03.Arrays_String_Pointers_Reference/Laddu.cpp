#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int n;
    n = pow(2, x);
    cout<<n;
    int arr[n];
    int finished =0 ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    while ((n / 2) >= 1)
    {
        int diff = 0;
        int sum = 0;
        string value;

        if (n == 1)
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
                        finished = 1;
                        break;
                    }
                }
                if (finished==1)
                {
                    break;
                }
                
            }
            n = n / 2;
        }

        
    }
    return 0;
}