#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int arr[100];
        int n = 4;
        int count = 0;

        // Readinng size of the array
        // cout << "Enter size of the array : ";
        // cin >> n;

        //Reading elements of array
        // cout << "Enter elements in array : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        //Find all duplicate elements in array
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                // If duplicate element found then increment count by 1
                if (arr[i] == arr[j])
                {
                    count++;

                    break;
                }
            }
        }
        if (count == 0)
        {
            cout << 2<<"\n";
        }
        if (count == 2 || count == 1)
        {
            cout << 1<<"\n";
        }
        if (count == 3)
        {
            cout << 0<<"\n";
        }
    }

    return 0;
}