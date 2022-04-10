#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << "Q"
                 << "\n";
             continue;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i <= n - 3)
                {
                    if (i == j)
                    {
                        cout << "Q";
                    }
                }
                if (i == j && i == n - 1)
                {
                    cout << "Q";
                }
                if (i != j || (i == n - 2 || i == n))
                {
                    cout << ".";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}