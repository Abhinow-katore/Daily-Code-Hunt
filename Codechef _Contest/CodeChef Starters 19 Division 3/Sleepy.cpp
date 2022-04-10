// #include <bits/stdc++.h>
// #include <stdio.h>
// using namespace std;

// int main()
// {
//     int test;
//     cin >> test;
//     for (int w = 0; w < test; w++)
//     {
//         int n;
//         int k;
//         cin >> n >> k;
//         string arr;
//         cin >> arr;
//         int count = 0;
//         int nap = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] == '0')
//             {
//                 count = count + 1;
//             }
//             if (count == k)
//             {
//                 nap = nap + 1;
//                 count = 0;
//             }
//             if (nap == k || arr[i] == '1')
//             {
//                 count = 0;
//             }
//         }
//         cout << nap<<"\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        int n, k, ans = 0, c = 0;

        cin >> n >> k;

        string s;

        cin >> s;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '0')
            {

                ++c;
                if (c >= k)
                {
                    ans++;
                    c = 0;
                }
            }

            else
            {
                c = 0;
            }
        }
        cout << ans;
        cout << "\n";
    }
    return 0;
}