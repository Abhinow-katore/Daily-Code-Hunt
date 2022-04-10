#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int j = 0; j < num; j++)
    {
        int n, k;
        cin >> n >> k;
        int ans = (2 * n - k - 1) / 2;
        ans *= 2;
        cout << ans << "\n";
    }

    return 0;
}