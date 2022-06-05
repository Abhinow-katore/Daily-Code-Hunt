// // #include <bits/stdc++.h>
// // class Solution {
// // public:
// //     int minMaxGame(vector<int>& nums) {
// //         stack<int>st;
// //         int i=0;
// //         while(st.size()!=1){
// //             int x= min(nums[i],nums[i+1]);
// //             st.push(x);
// //             i++;
// //             int y=max(nums[i],nums[i+1]);
// //             st.push(y);
// //             i++;
// //             if(st.size()==nums.size()/2){
// //                 int n = nums.size()/2;
// //                 nums.clear();
// //                 for(int j = 0 ; j<n; j++){
// //                     nums.push_back(st.top());
// //                     st.pop();
// //                 }
// //                 reverse(nums.begin(), nums.end());
// //                 i=0;
// //             }
// //         }
// //         return st.top();
// //     }
// // };
// // ---------------------------
// // class Solution {
// // public:
// //     int minMaxGame(vector<int>& nums) {
// //         vector<int>newnums;
// //         int i = 0 ;
// //         while(newnums.size()!=1 ||nums.size()!=1){
// //             while(newnums.size()!=nums.size()/2){
// //                 if(i%2==0){
// //                     newnums.push_back(min(nums[2 * i], nums[2 * i + 1]));
// //                 }
// //                 else newnums.push_back(max(nums[2 * i], nums[2 * i + 1]));
// //             }
// //             i=0;
// //             // int s = nums.size();
// //             nums.clear();
// //             while(nums.size()!=newnums.size()/2){
// //                 if(i%2==0){
// //                     nums.push_back(min(newnums[2 * i], newnums[2 * i + 1]));
// //                 }
// //                 else nums.push_back(max(newnums[2 * i], newnums[2 * i + 1]));
// //             }
// //             i=0;
// //             newnums.clear();
// //         }
// //         return max(nums[0],newnums[0]);

// //     }
// // };
// // class Solution
// // {
// // public:
// //     int minMaxGame(vector<int> &nums)
// //     {
// //         int x = min(nums[0], nums[1]);
// //         int val = 0;
// //         for (int i = 2; i < nums.size(); i++)
// //         {
// //             if (i % 2 == 0)
// //             {
// //                 val = min(x, max(nums[i], nums[i + 1]));
// //                 i = i + 2;
// //             }
// //             else
// //             {
// //                 val = min(x, min(nums[i], nums[i + 1]));
// //                 i = i + 2;
// //             }
// //         }
// //         return val;
// //     }
// // };
// class Solution
// {
// public:
//     int minMaxGame(vector<int> &nums)
//     {
//         vector<int> a;
//         while (nums.size() > 1)
//         {
//             int i = 0;
//             int c = 0;
//             while (i < nums.size() - 1)
//             {
//                 if (c == 0)
//                 {
//                     a.push_back(min(nums[i], nums[i + 1]));
//                     c = 1;
//                 }
//                 else if (c == 1)
//                 {
//                     a.push_back(min(nums[i], nums[i + 1]));
//                     c = 0;
//                 }
//                 i = i + 2;
//                 copy(nums.begin(), nums.end(), back_inserter(a));
//             }
//         }
//     }
// };