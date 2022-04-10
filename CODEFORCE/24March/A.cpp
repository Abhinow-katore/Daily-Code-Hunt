#include <bits./stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int p = 0; p < test; p++)
    {
        int n;
        cin >> n;
        int arr[n];
        int newarr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            newarr[i] = arr[i];
        }
        sort(arr, arr + n);
        int x = arr[0];
        int y = arr[n - 1];
        // cout<<x<<" "<<y;
        int f = 0;
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            if (x == newarr[i])
            {
                f = i;
            }
            if (y == newarr[i])
            {
                s = i;
            }
        }
        cout << f + 1 << " " << s + 1<<"\n";
    }

    return 0;
}