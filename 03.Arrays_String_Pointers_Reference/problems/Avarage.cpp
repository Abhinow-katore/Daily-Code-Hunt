#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;



double posAverage(int nums[]) {
    // code here
    int add = 0;
    int count = 0;
    int n = sizeof(nums)/sizeof(nums[0]);
    for (int i = 0; i < n; i++)
    {
        if (nums[i]>0)
        {
            add = add + nums[i];
            /* code */
            count = count +1;
        }
        

        
    }
    return add / double(count);
}



// int main(){
//     int t;
//     cin>>t;
//     string s;
//     getline(cin, s);
//     while (t--)
//     {
//         string str;
//         getline(cin,str);
//         vector<int> nums;
//         istringstream ss(str);

//         string num;
//         while (ss>>num){
//             nums.push_back(stoi(num));
//         }
//     }
    

    // return 0;
// }
#include <iostream>
#include <stdio.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    int nums[t]; 
    for (int i = 0; i < t; i++)
    {
        cin>>nums[i];
    }
    cout<<posAverage(nums);

    

    return 0;
}