// #wrong
#include <iostream>
#include <stdio.h>
using namespace std;
// int largest(int arr[], int n, int k)
// {

//     return dif;
// }

int main()
{
    int k;
    int n;
    cin >> k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int arr[] = {10, 324, 45, 90, 9808};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout << "Largest in given array is ";
    //  << largest(arr, n,k);
    // int i;

    // Initialize maximum element
    int max = arr[0];
    int min = arr[0];
    int dif_min = 0;
    int dif_max = 0;
    int dif = 0;

    // Traverse array elements
    // from second and compare
    // every element with current max
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    dif_min = min + k;
    cout<<"dif_min:"<<dif_min<<"\n";
    cout<<"min:"<<min<<"\n";


    cout<<"-----------";
    dif_max = max - k;
    dif = dif_max - dif_min;
    cout<<"dif_max:"<<dif_max<<"\n";
    cout<<"max:"<<max<<"\n";
    // if (dif > 0)
    // {
    //     dif_max = max - k;
    //     dif = 0;
    // }

    cout<<"dif:"<<dif<<"\n";

    if (dif < 0)
    {
        dif = 0;
        cout<<"dif_max:"<<dif_max<<"\n";
        cout<<"max:"<<max<<"\n";

        dif_max = max + k ;
        cout<<"dif_max:"<<dif_max<<"\n";
        cout<<"dif_min:"<<dif_min<<"\n";
        dif = dif_max - dif_min;
    }

    cout << dif << "\n";


    return 0;
}