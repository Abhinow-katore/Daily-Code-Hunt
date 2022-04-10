
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int k = 0; k < test; k++)
    {
        int size;
        cin >> size;
        int s[size];
        for (int i = 0; i < size; i++)
        {
            cin >> s[i];
        }
        sort(s, s + size, greater<int>());

        if (s[0] > s[1] + 1)
        {
            cout << "NO"
                 << "\n";
        }
        else if (size == 1 && s[0] > 1)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
    }

    return 0;
}