// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int a;
//         cin >> a;
//         int n = pow(2, a);
//         int count = 1;
//         cout << "1 ";
//         for (int i = 1; i < a; i++)
//         {
//             cout << i << " ";
//             count += i;
//         }
//         cout << (n - count) << "\n";
//     }

//     return 0;
// }
#include <bits/stdc++.h>

typedef long long int ll;
typedef unsigned int ui;
typedef unsigned long long int ul;

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ul test;

    cin >> test;
    while (test--)
    {
        int a;

        cin >> a;

        ul n = pow(2, a), count = 1;
        cout << "1 ";

        for (int i = 1; i < a; i++)
        {
            cout << i << " ";
            count += i;
        }
        cout << (n - count) << "\n";
    }
    return 0;
}