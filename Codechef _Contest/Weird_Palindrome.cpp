#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        int x = 0;
        cin >> n;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 1)
            {
                c++;
            }
        }
        if (c % 2 == 1)
        {
            c -= 1;
        }
        cout << c / 2 << "\n";
    }

    return 0;
}
