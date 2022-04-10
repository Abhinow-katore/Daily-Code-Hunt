// class Solution
// {
// public:
//     bool isSubsequence(string s, string t)
//     {
//         for (int i = 0; i < s.length(); i++)
//         {
//             // int j = 0;
//             int count = 0;
//             int k = 0;
//             for (int j = 0; j < t.length(); j++)
//             {
//                 if (s[i] == t[j])
//                 {
//                     count++;
//                     break;
//                 }
//                 k = j + 1;
//             }
//         }
//         if (count == s.size())
//             return true;
//         else
//             return false;
//     }
// };
