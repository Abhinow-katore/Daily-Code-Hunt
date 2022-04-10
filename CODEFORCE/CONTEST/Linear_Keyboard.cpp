#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int p = 0; p < test; p++)
    {
        string arr1, arr2;
        cin >> arr1 >> arr2;
        int New_arr[arr2.size()];
        int sum = 0;
        for (int i = 0; i < arr2.size(); i++)
        {
            for (int j = 0; j < arr1.size(); j++)
            {
                if (arr2[i] == arr1[j])
                {
                    New_arr[i] == j + 1;
                }
            }
        }
        for (int i = 0; i < arr2.size(); i++)
        {
            sum = abs(New_arr[i + 1] - New_arr[i]) + sum;
        }
        cout << sum << "\n";
    }

    return 0;
}