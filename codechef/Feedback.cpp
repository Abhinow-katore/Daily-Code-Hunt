#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        string arr;
        cin >> arr;
        int count = 0;
        for (int i = 0; i < arr.size() - 2; i++)
        {

            if ((arr[i] == '1' && arr[i + 1] == '0' && arr[i + 2] == '1')||((arr[i] == '0' && arr[i + 1] == '1' && arr[i + 2] == '0')))
            {
                cout << "Good"
                     << "\n";
                break;
            }
            count = count + 1;
        }
        if (count == arr.size() - 2)
        {
            cout << "Bad"
                 << "\n";
        }
    }

    return 0;
}
