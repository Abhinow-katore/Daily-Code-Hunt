#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    cout << arr[0] << "\n";
    cout << *ptr << "\n";
    ptr = ptr + 1;
    cout << *ptr << "\n";
    cout << "-------------------------" << "\n";
    for (int i = 0; i < 4; i++)
    {
        
        ptr = ptr + 1;

        cout << *ptr << "\n";
        cout<<arr[i];
        cout << "-------------------------" << "\n";
    }

    return 0;
}