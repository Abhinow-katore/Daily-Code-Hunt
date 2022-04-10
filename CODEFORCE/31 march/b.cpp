// #include <bits/stdc++.h>
// #include <stdio.h>
// using namespace std;

// int main()
// {
//     int test;
//     cin >> test;
//     for (int j = 0; j < test; j++)
//     {
//         long n;
//         cin>>n;
//         long long arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         sort(arr, arr + n);
//         if(n==1 && arr[0]>1){
//             cout<<"NO"<<"\n";
//             continue;
//         }
//         if(n==1 && (arr[0]==1 || arr[0]==0)){
//             cout<<"YES"<<"\n";
//             continue;
//         }
//         int flag = 0;
//         for (int i = 0; i < n - 1; i++)
//         {
//             if(arr[i]==1)continue;
//             if (abs(arr[i] - arr[i + 1]) > 1)
//             {
//                 cout << "NO"
//                      << "\n";
//                      flag=1;
//                 break;
//             }

//         }
//         if(flag==0){
//             cout << "YES"<< "\n";
//         }
        
//     }

//     return 0;
// }
