#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{   int arr[3];
    int arr1[3];
    int arr2[3];
    int arr3[3];
    int c =0;


    for (int j = 0; j < 3; j++)
    {
        // assigned time
        cin >> arr1[j];
        if (j == 0)
        {
            arr3[j] = arr1[j]; // for the first time
        }
        if (j > 0)
        {
            // subtracting time from the required time
            arr3[j] = arr1[j] - arr1[j - 1];
        }
        cout<<arr3[j]<<" ";
    }

            for (int k = 0; k < 3; k++)
        {
            cin >> arr2[k];         // taking input that number of time required by students
            if (arr3[k] >= arr2[k]) //number of statisfied students
            {
                c = c + 1;
            }
        }
        cout << c << endl;
    return 0;
}