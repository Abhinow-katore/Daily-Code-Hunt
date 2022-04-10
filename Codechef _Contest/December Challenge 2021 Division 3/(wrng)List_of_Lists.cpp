// #include <bits/stdc++.h>
// #include <stdio.h>
// using namespace std;

// int main()
// {
//     int test;
//     cin >> test;
//     for (int p = 0; p < test; p++)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         int flag = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         // sort(arr, arr + n);
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[0] == arr[n - 1])
//             {
//                 cout << "0"
//                      << "\n";
//                 break;
//             }
//             for (int j = i + 1; j < n; j++)
//             {
//                 // cout<<i<<"->"<<j<<"\n";
//                 if (arr[i] == arr[j])
//                 {
//                     flag = 1;
//                     break;
//                 }
//             }
//             if (flag == 1)
//             {
//                 cout << n - 1 << "\n";

//                 break;
//             }
//             if (flag == 0)
//             {
//                 cout << "-1"
//                      << "\n";
//                 break;
//             }
//         }
//     }

//     return 0;
// }