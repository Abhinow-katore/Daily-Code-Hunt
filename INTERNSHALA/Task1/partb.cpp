#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i] >= (arr[j] + 3))
            {
                cout << "(" << arr[i] << "," << arr[j] << ")"
                     << "\n";
            }
        }
    }

    return 0;
}