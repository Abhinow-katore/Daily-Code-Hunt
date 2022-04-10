#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int b = 0;
    for (int i = 1; i <= m; i++)
    {

        b = n * i;
        cout << b<<"\n";
    }

    return 0;
}