// #include <bits/stdc++.h>
// #include <stdio.h>
// using namespace std;

// int main()
// {
//     string arr1, arr2, new_arr;
//     int num1 = (sizeof(arr1) / sizeof(arr1[0]));
//     int num2 = (sizeof(arr2) / sizeof(arr2[0]));

//     int count = 0;
//     cin>>arr1;
//     for (int i = 0; i < num1; i++)
//     {
//         for (int j = i; j < num2; j++)
//         {
//             if (arr1[i] != arr2[j])
//             {
//                 new_arr[j] = arr2[j];
//             }
//             if (arr1[i] == arr2[j])
//             {
//                 count = count + 1;
//                 continue;
//             }
//         }
//         if (count == (sizeof(arr1) / sizeof(arr2[0])))
//         {
//             cout << "-1";
//         }
//     }
//     int num3 = (sizeof(new_arr) / sizeof(new_arr[0]));
//     for (int i = 0; i < num3; i++)
//     {
//         cout<<new_arr[i];
//     }

//     return 0;
// }


 class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int len = n;
        int count = 0;
        int *num = new int(0);
        
        for (int i = 1; i < len; i++){
            // skip looping till *num ==0
            if (*num != 0) {
                *num --;
                continue;
            }
            if (arr[i] == 0) return -1;
            
            if (i == 0 && arr[0] == 0) return -1;
            
            *num = arr[i]+1;
            count ++;
            
        }
            delete num; 
        return count;
    }
    
};