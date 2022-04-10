#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
            continue;
        }
        else
        {
            n = n - 1;
            continue;
        }
    }
    cout<<n<<"\n";

    return 0;
}