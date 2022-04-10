// #include <bits/stdc++.h>
// #include <stdio.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int x = 0;
//     int sum = 0;
//     int least = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // for (int i = 0; i < n - 2; i++)
//     // {
//     //     x = (arr[i] - arr[i + 1]) * (arr[i + 1] - arr[i + 2]);
//     //     cout<<"x:"<<x<<"\n";
//     //     sum = sum + x;
//     // }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {

//                 x = (arr[i] - arr[j]) * (arr[j] - arr[k]);
//                 cout << x << "\n";
//                 // sum = sum + x;

//                 // sum = sum  + x;
//             }
//         }
//     }

//     // least = (arr[0] - arr[n - 2]) * (arr[n - 2] - arr[n - 1]);

//     cout << sum;

//     return 0;
// }