#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int x = 0;
    int ans;
    int digit;
    x = abs(a - b);
    digit = x % 10;
    if (digit == 9)
    {
        ans = x - 1;
    }
    else
    {
        ans = x + 1;
    }
    cout << ans << "\n";

    return 0;
}