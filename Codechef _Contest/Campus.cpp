#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, k;
        cin >> n >> k;
        int count = 0;
        while (n > 0)
        {
            n = n - k;
            count = count + 1;
        }
        cout << count << "\n";
    }

    return 0;
}