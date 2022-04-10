// #include <iostream>
// #include <stdio.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         if (x == 0)
//         {
//             if (y <= 2 )
//             {
//                 cout << "NO"
//                      << "\n";
//                      continue;
//             }
//             if (y > 2 )
//             {
//                 if (y % 2 == 0)
//                 {
//                     cout << "YES"
//                          << "\n";
//                          continue;
//                 }
//                 else
//                 {
//                     cout << "NO"
//                          << "\n";
//                          continue;
//                 }
//             }
//         }

//         if ((x + (y * 2)) % 2 == 0)
//         {
//             cout << "YES"
//                  << "\n";
//             continue;
//         }
//         else
//         {
//             cout << "NO"
//                  << "\n";
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {

        long x, y;

        cin >> x >> y;

        long long int z = x + 2 * y;
        if (z % 2)
            cout << "NO" << endl;

        else
        {

            if (x == 0 and y % 2)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;

    
        }
    }

    return 0;
}