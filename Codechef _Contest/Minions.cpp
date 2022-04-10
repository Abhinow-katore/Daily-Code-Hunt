#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int count = 0;
        int arr[n];
        int trans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            trans = arr[i] +k ;
            if (trans % 7 == 0)
            {
                count = count + 1;
            }
        }
        cout << count << "\n";
    }

    return 0;
}