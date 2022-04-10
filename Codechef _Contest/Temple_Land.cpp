#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int S;
    cin >> S;
    for (int i = 0; i < S; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        

        if (n % 2 == 0)
        {
            cout << "no"
                 << "\n";
        }
       
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[0] != 1)
                {
                    cout << "no"
                         << "\n";
                    break;
                }

                if (arr[i] != arr[n - i - 1])
                {
                    cout << "no"
                         << "\n";
                    break;
                }
                if (arr[i] == arr[n - i - 1])
                {
                    if ((arr[i] + 1) == arr[i + 1])
                    {
                        cout << "yes"
                             << "\n";
                        break;
                    }
                    else
                    {
                        cout << "no"
                             << "\n";
                        break;
                    }

                    continue;
                }
            }
        }
    }

    return 0;
}