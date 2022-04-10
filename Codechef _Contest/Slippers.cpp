#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int N, L, X;
        cin >> N >> L >> X;
        int R = N - L;
        if (R <= L)
        {
            cout << R * X << "\n";
        }
        if (L < R)
        {
            cout << L * X << "\n";
        }
    }

    return 0;
}