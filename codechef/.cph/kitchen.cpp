// #include <iostream>
// #include <stdio.h>
// using namespace std;

// int main()

// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)

//     {
//         /* code */

//         int n;
//         cin >> n;
//         int arr[n];
//         int arr1[n];
//         int arr_new[n];
//         // int arr_new[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr1[i];
//         }

//         int next = 0;
//         for (int i = 0; i < n; i++)
//         {
//             arr_new[i + 1] = arr[i + 1] - arr[i];
//             cout << arr_new[i] << " ";
//         }
//         // for (int i = 0; i < n; i++)
//         // {
//         //     int ans = 0;
//         //     // arr_new[i] = arr[i] - arr1[i];
//         //     // cout<<arr_new[i]<<" ";
//         //     if (arr1[i] < arr[i])
//         //     {
//         //         // arr_new[i] = ans;
//         //         ans = ans + 1;
//         //     }
//         //     cout << ans;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x; //testcases
    for (int i = 0; i < x; i++)
    {
        int c = 0;
        cin >> y; // number of students
        int arr1[y], arr2[y], arr3[y];
        for (int j = 0; j < y; j++)
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
        }
        for (int k = 0; k < y; k++)
        {
            cin >> arr2[k];         // taking input that number of time required by students
            if (arr3[k] <= arr2[k]) //number of statisfied students
            {
                c = c + 1;
            }
        }
        cout << c << endl;
    }
}
//////////////
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