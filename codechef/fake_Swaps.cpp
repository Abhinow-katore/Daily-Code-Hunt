#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        int count = 0;
        int count1 = 0;
        cin >> n;
        string arr;
        string arr1;
        cin >> arr >> arr1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == '0')
            {
                count = count + 1;
            }
            if (arr[i] == '1')
            {
                count1 = count1 + 1;
            }
        }
        if (count >= 1 && count1 >= 1)
        {
            cout << "YES"
                 << "\n";
        }
        if (count < 1 || count1 < 1)
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}