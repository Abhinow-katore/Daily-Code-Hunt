#include <iostream>
#include <stdio.h>
using namespace std;
// int reverse(int arr[], int n){
//     int x,y;
//     int temp = 0;
//     for (int i = 0; i < n; i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[n-i];
//         arr[n-i] = arr[i];
//         // x= arr[i];
//         // y= arr[n-i];
//     }
//     return arr[n];

// }

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // cout<<reverse(arr, n);
    int i, j;
    j = n - 1;
    i = 0;
    // int Temp = 0;
    while (i < j)
    {
        int Temp = arr[i];
        arr[i] = arr[j];
        arr[j] = Temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}