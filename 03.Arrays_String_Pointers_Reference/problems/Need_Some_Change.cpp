#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n -2; i++)
    {
            temp = arr[i + 2];

            arr[i + 2] = arr[i];
            arr[i] = temp;
            // cout << arr[i]<<" "<<arr[j]<<"\n";
            
        cout << arr[i];
        
    }
    cout<<arr[n]<<arr[n-1];

    return 0;
}