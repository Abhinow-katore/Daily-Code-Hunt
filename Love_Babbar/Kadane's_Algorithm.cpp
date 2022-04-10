#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int algo(int arr[], int n)
{

    int curr = 0;
    int max = INT_MIN;
    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        curr = curr + arr[i];
        if (curr > max)
        {
            max = curr; 
        }
        if (curr < 0)
        {
            curr = 0;
            
        }

//'''https://youtu.be/HCL4_bOd3-4?t=418''' Kadane's Algorithm
// trick


    }
    if (max<0)
    {
        /* code */
        return neg;
    }
    else
    {
        return max;
    }
    
    
    
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << algo(arr, n);

    return 0;
}
//////////////
