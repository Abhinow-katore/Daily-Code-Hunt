#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int arr[3];
        int cnt = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] == 7)
            {
                cout << "YES"
                     << "\n";
                break;
            }
            if (arr[i] != 7)
            {
                cnt = cnt + 1;
            }
        }
        if (cnt == 3)
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}