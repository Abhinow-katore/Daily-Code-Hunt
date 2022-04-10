#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

// int fun(int n)

// {

//     if (n == 0)

//         return 0;

//     else

//         return (n % 10 + 2 * fun(n / 10));
// }

// int main()
// {
//     int x = 1001110;
//     cout<<fun(x);

//     return 0;
// }
int main()
{

    int *p, x = 10;

    p = &x;

    *p = ++(*p) + x;

    *p = ++(*p) + x;

    printf("%d", x);
    return 0;
}