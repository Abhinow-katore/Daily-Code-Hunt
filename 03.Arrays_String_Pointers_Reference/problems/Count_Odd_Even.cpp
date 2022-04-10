#include <iostream>
#include <stdio.h>
using namespace std;

class Solution
{
public:
    void countOddEven(int arr[], int sizeof_array)
    {
        int count1 = 0;
        int count2 = 0;
        int arr1[sizeof_array] = {0};
        int arr2[sizeof_array] = {0};
        for (int i = 0; i < sizeof_array; i++)
        {
            if (arr[i] % 2 == 0)
            {
                // cout<<"even";
                count1 += 1;
                arr1[i] = arr[i];
            }
            else if (arr[i] % 2 != 0)
            {
                // cout<<"odd";
                count2 += 1;
                arr2[i] = arr[i];
            }
        }

        cout << "There are " << count2 << " odd elements "
             << "\n";

        for (int i = 0; i < sizeof_array; i++)
        {
            if (arr2[i] == 0)
            {
                continue;
            }
            if (i == 0)
            {
                cout << "(";
            }
            cout << arr2[i];
            if (i < sizeof_array - 1)
                cout << ", ";
            if (i == sizeof_array - 1)
            {
                cout << ")";
            }
        }

        cout << "and " << count1 << " even elements "
             << "\n";

        for (int i = 0; i < sizeof_array; i++)
        {
            if (arr1[i] == 0)
            {
                continue;
            }
            if (i == 0)
            {
                cout << "(";
            }

            cout << arr1[i];
            if (i < sizeof_array - 2)
                cout << ", ";
        }
        cout << ")";
    }
};

int main()
{
    int sizeof_array;
    cin >> sizeof_array;
    int arr[sizeof_array];
    for (int i = 0; i < sizeof_array; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    ob.countOddEven(arr, sizeof_array);

    return 0;
}

// ///////////////
// for (int i = 0; i < sizeof_array; i++)
// {
//     /* code */
// }
