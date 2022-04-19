// #include <bits/stdc++.h>
// #include <stdio.h>
// using namespace std;

// int main()
// {
//     int n,m;
//     cin >>n>> m;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int flag = 0;
//     int j = 0;
//     for (int i = 1; i < m - 1; i++)
//     {
//         if (i + a[j] +1 < m)
//         {
//             if (1+a[j + 1] >= i + a[j])
//             {
//                 i = a[j + 1] + i +1;
//                 j++;
//             }
//             else
//             {
//                 i = i + a[j] +1 ;
//                 j++;
//             }
//         }
//         if (i + a[j]+1 >= m - a[0])
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 1)
//     {
//         cout << "NO"
//              << "\n";
//     }
//     else

//         cout << "YES"
//              << "\n";

//     return 0;
// }
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int repeat;
    cin >> repeat;
    for (int p = 0; p < repeat; p++)
    {
        int n, chair;
        cin >> n >> chair;
        int arr[chair];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        if (n > chair)
        {
            cout << "NO"
                 << "\n";
                 continue;
        }
        sort(arr, arr + n, greater<int>());
        arr[0] = arr[0] * 2;
        for (int i = 0; i < n - 1; i++)
        {
            sum += arr[i] + 1;
        }
        sum += 1;
        if (sum > chair)
        {
            cout << "NO"
                 << "\n";
        }
        else
            cout << "YES"
                 << "\n";
    }

    return 0;
}