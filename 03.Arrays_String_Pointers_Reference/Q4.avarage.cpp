#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

double avg(int arr[], int n)
{
    int add = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            add = add + arr[i];
            /* code */
            count = count +1;
        }
        

        
    }
    
    return add / double(count);
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
    cout << avg(arr, n);

    return 0;
}