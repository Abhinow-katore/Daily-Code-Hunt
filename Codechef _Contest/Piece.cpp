// #include <bits/stdc++.h>
// #include <stdio.h>
// using namespace std;

// int main()
// {
//     int test;
//     cin >> test;
//     for (int k = 0; k < test; k++)
//     {
//         int i, j;
//         int x, y;
//         cin >> i >> j >> x >> y;

//         if (i == x && j == y)
//         {
//             cout << "0"
//                  << "\n";
//             continue;
//         }
//         if (((i + j) % 2 == 0 && (x + y) % 2 != 0) || ((i + j) % 2 == 0 && (x + y) % 2 != 0))
//         {
//             cout << "1"
//                  << "\n";
//         }
//         if (((i + j) % 2 == 0 && (x + y) % 2 == 0) || ((i + j) % 2 != 0 && (x + y) % 2 != 0))
//             {
//                 cout << "2"
//                      << "\n";
//             }
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        int x, y, a, b, p, q;
        cin >> a >> b >> p >> q;
        if (a == p && b == q)
        {
            /* code */
            cout << "0" << endl;
        }

        x = ((a + b) % 2);
        y = ((p + q) % 2);

        if (x == y)
        {
            cout << "2" << endl;
        }

        if (x != y)
        {
            /* code */
            cout << "1" << endl;
        }
    }

    return 0;
}