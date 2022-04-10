#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count_even = 0;
    int count_other = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count_even = count_even + 1;
        }
        else
        {
            count_other = count_other + 1;
        }
    }
    if (count_even > count_other)
    {
        cout << "READY FOR BATTLE"
             << "\n";
    }
    else
    {
        cout << "NOT READY"
             << "\n";
    }

    return 0;
}