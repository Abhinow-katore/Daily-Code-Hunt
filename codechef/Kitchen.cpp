#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int z = 0; z < num; z++)
    {
        int n;
        cin >> n;
        int arr[n];
        int arr1[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        if (arr[0] >= arr1[0])
        {
            count = count + 1;
        }

        for (int i = 0; i < n; i++)
        {
            if ((arr[i + 1] - arr[i]) <= arr1[i])
            {
                count = count + 1;
            }
        }
        cout << count<<"\n";
    }

    return 0;
}