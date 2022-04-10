
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            count = count + 1;
        }
        if (n % 2 != 0)
        {
            n = n - 1;
            count = count + 1;
        }
        if (n == 0)
        {
            cout << count;
        }
    }

    return 0;
}