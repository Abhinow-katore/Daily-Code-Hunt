//wrong
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    int arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count = count + 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                break;
            }
            count = count + 1;
        }
    }
    cout << count;

    return 0;
}