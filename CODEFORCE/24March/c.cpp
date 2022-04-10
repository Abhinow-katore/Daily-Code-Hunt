// #include <bits/stdc++.h>
// #include <stdio.h>
// using namespace std;

// int main(){
//         int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int a1= 0;
//     int a0 = 0;
//     int flag1 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]%2==0){
//             a0++;
//         }
//         if(arr[i]%2!=0){
//             a1++;
//         }
//     }
//     if(a0==n||a1==n){
//         flag1  =1;
//     }
//     if(flag1==1){
//         cout<<"YES"<<"\n";
//         // continue;
//         return 0;
//     }
//     int b0 = 0;
//     int b1 = 0;
//     int flag2 = 0;
//     int val = 0;
//       for (int i = 0; i < n; i++)
//     {
//             val = arr[i]%3;
//             if(val !=arr[i+1]%3){
//                 flag2=1;
//             }
//     }
//     if(flag2 ==1){
//         cout<<"NO"<<"\n";
//     }
//     else{
//         cout<<"YES"<<"\n";
//     }
    
//     return 0;
// }