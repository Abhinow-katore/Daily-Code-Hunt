#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int y = 1;
    for (int i = n; i > 0; i--)
    {
        y = n * y;
        n = n - 1;
    }
    int count = 0;
    while (y % 10 == 0)
    {
        count = count + 1;
        y = y / 10;
    }
    cout << count;

    return 0;
} 