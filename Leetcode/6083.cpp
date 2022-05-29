// class Solution
// {
// public:
//     bool digitCount(string num)
//     {
//         int val = num.length();

//         int arr[val];
//         for (int i = 0; i < val; i++)
//         {
//             arr[num[i]] = arr[num[i]] + 1;
//         }
//         for (int i = 0; i < num.length(); i++)
//         {
//             if (num[i] != arr[i])
//                 return false;
//         }
//         return true;
//     }
// };

// void countFreq(int arr[], int n)
// {
//     unordered_map<int, int> mp;

//     // Traverse through array elements and
//     // count frequencies
//     for (int i = 0; i < n; i++)
//         mp[arr[i]]++;

//     // Traverse through map and print frequencies
//     for (auto x : mp)
//         cout << x.first << " " << x.second << endl;
// }