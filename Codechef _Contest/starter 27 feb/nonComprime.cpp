#include<bits/stdc++.h>
#define ll   long long int
using namespace std;

int main()
{
    int testing;
    cin >> testing;

    while (testing--)
    {
        int n;
        cin >> n;

        vector<int> arr(n + 2, 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int i = 1, current = 1;

        while (i <= n)
        {
            if (current)
            {
                arr[i] = arr[i + 1] * 2;
                i += 2;
            }
            else
            {
                arr[i] = arr[i - 1] * 2;
                i++;
            }

            current = 1 - current;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }

        cout<<endl;
    }
}