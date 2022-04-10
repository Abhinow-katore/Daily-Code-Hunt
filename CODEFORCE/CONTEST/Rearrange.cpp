#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        // if (i==0)
        // {
        //     if (arr[1]>arr[0])
        //     {
        //         arr1[0]=arr[1];
        //         continue;
        //     }
        //     else{
        //         arr1[0]=arr[0];
        //         continue;
        //     }
        // }
        

        if (arr[i - 1] >= (arr[i] && arr[i + 1]))
        {
            arr1[i] = arr[i - 1];
            continue;
        }
        if (arr[i] >= (arr[i - 1] && arr[i + 1]))
        {
            arr1[i] = arr[i];
            continue;
        }
        if (i != n - 1)
        {
            if (arr[i + 1] >= (arr[i] && arr[i - 1]))
            {
                arr1[i] = arr[i + 1];
                continue;
            }
        }
        if (i==n-1)
        {
           if (arr[n-1] >= arr[n-2])
            {
                arr1[n-1] = arr[n-1];
                continue;
            }
            if (arr[n-1] <= arr[n-2])
            {
                arr1[n-1] = arr[n-2];
                continue;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}