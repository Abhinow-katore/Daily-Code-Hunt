// class Solution
// {
// public:
//     int triangularSum(vector<int> &nums)
//     {
//         stack<int> s1;
//         stack<int> s2;
//         int i = 0;
//         int found = 0;
//         int flag1 = 0;
//         int flag2 = 0;
//         while (found != 1)
//         {
//             if (flag1 == 0)
//             {
//                 s1.push(nums[i]);
//                 int sum = nums[i+1] + s1.top());
//                 if (sum < 10)
//                 {
//                     s1.pop();
//                     s1.push(nums[i + 1]);
//                     s2.push(sum);
//                 }
//                 if (sum >= 10)
//                 {
//                     s1.pop();
//                     s1.push(nums[i + 1]);
//                     s2.push(sum % 10);
//                 }
//                 if (1==nums.size()-1)
//                 {
//                     s1.pop();
//                     flag1 = 1;
//                     flag2 = 0;
//                 }
//             }
//             i++;
//         }
//     }
// };