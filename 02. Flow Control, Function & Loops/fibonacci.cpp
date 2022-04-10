///////////Fibonaci 

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2, n;
    cin >> n;

    cout << a << " " << b << " ";
    int c = 0;
    for (int i = 0; i <=n; i++)
    {

        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }

    return 0;
}