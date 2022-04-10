// #include <bits/stdc++.h>
// #include <iostream>
// #include <stdio.h>
// using namespace std;

// int main(){
//     int arr[5] = {1,2,3,-4,-1};
//     int max = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         /* code */
//         int x = arr[i];
        
//         for (int j = i+1; j < 5; j++)
//         {
//             /* code */
//             x = x + arr[j];
            
//             if (max <x)
//             {
//                 /* code */
//                 max = x;
//             }
            
            
//         }

//     }
//     cout<<max<<"\n";
    
    
//     return 0;
// }

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int length = sizeof(nums)/sizeof(nums[0]);
    int max = 0;
    for (int i = 0; i < length; i++)
    {
        /* code */
        int x = nums[i];
        
        for (int j = i+1; j < length; j++)
        {
            /* code */
            x = x + nums[j];
            
            if (max <x)
            {
                /* code */
                max = x;
            }
            
            
        }

    }
    cout<<max;
        // return max;
        
    
    return 0;
}