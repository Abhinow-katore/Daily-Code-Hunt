#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    for (int p = 0; p < test; p++)
    {
        string arr[3];
        string arr1[2];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 2; i++)
        {
            cin >> arr1[i];
        }
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (arr[i] == arr1[j])
                {
                    cout << arr[i]<<"\n";
                    count = 1;
                    break;
                }
            }
            if (count == 1)
            {
                break;
            }
        }
    }

    return 0;
}