#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int N, X, Y;
        cin >> N >> X >> Y;
        int total = 1 + N;
        if (X <= total * Y)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}