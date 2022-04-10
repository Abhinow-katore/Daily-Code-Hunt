#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int w = 0; w < test; w++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // int step = 0;
        int x = 0;
        int count = 0;
        for (int k = 0; k < 100000; k++)
        {
            int Xor = 0;
            for (int i = 0; i < n; i++)
            {
                int step = 0;
                step = arr[i] + x;
                Xor = Xor ^ step;
            }
            if (Xor == 0)
            {
                // cout << "YES"
                //      << "\n";
                cout << x<<"\n";
                break;
            }
            // cout<<"Xor:"<<Xor<<"\n";
            if (Xor != 0)
            {
                x = x + 1;
                count = count + 1;
            }
            if (count == 100000)
            {
                cout << "-1"
                     << "\n";
                break;
            }
        }
    }

    return 0;
}