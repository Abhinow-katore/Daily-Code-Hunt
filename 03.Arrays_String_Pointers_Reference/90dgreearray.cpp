// #include <bits/stdc++.h>
// #include <iostream>
// #include <stdio.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n;
//     cin >> m;
//     int arr[m][n];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             // arr[i][j] = arr[j][i];
//             swap(arr[i][j], arr[j][i]);

//         }

//     }
//     for (int i = 0; i < n/2; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             swap(arr[i][j], arr[n-1-i][j]);
//         }
//     }
// //    for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             cout<<arr[i][j]<<" ";

// //         }
// //     cout<<"\n";
// //     }
//     return 0;
// }

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        // arr[i][j] = arr[j][i];
        swap(matrix[i][j], matrix[j][i]);
    }
}
for (int i = 0; i < n / 2; i++)
{
    for (int j = 0; j < n; j++)
    {
        swap(matrix[i][j], matrix[n - 1 - i][j]);
    }
}