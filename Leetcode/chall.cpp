// class Solution
// {
// public:
//     bool backspaceCompare(string s, string t)
//     {
//         stack<int> st1;
//         stack<int> st2;
//         for (int i = 0; i < max(s.length(), t.length()); i++)
//         {
//             if (s[i] == '#')
//             {
//                 st1.pop();
//             }
//             if (s[i] != '#')
//             {
//                 st1.push(s[i]);
//             }
//         }
//         for (int i = 0; i < max(s.length(), t.length()); i++)
//         {

//             if (t[i] == '#')
//             {
//                 st2.pop();
//             }
//             if (t[i] != '#')
//             {
//                 st2.push(t[i]);
//             }
//         }
//         while (!st1.empty() && !st2.empty())
//         {
//             if (st1.top() != st2.top())
//                 return false;
//             st1.pop();
//             st2.pop();
//         }
//         return true;
//     }
// };