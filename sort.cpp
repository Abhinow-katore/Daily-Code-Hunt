// // C++ program to demonstrate descending order sort using
// // greater<>().
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
//     int n = sizeof(arr) / sizeof(arr[0]);

//     sort(arr, arr + n, greater<int>());

//     cout << "Array after sorting : \n";
//     for (int i = 0; i < n; ++i)
//         cout << arr[i] << " ";

//     return 0;
// }

// C++ program for implementation of selection sort
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

/* Function to print an array */
void printArray(int arr[], int size, int k)
{
    int i;
    for (i = 0; i < k; i++)
    {
        if (i = k-1)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// Driver program to test above functions
int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n, k);
    return 0;
}