#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int p = 0; p < test; p++)
    {
        int n;
        cin >> n;
        string arr1;
        string arr2;
        cin >> arr1;
        cin >> arr2;

        int flag = 0;
        int count = 0;
        if (arr1[n - 1] < arr2[n - 1])
        {
            flag = 1;
            count++;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr1[i] < arr2[i])
            {
                count++;
                flag = 1;
            }
            if (arr1[i] == arr2[i])
            {
                if (flag == 1)
                {
                    count++;
                }
            }
            if (arr1[i] > arr2[i])
            {
                flag = 0;
            }
        }
        cout << count << "\n";
    }

    return 0;
}