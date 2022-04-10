// class Solution
// {
// public:
// 	bool containsDuplicate(vector &nums)
// 	{
// 		int n = nums.size();
// 		unordered_map<int, int> map;
// 		for (int i = 0; i < nums.size(); i++)
// 		{
// 			map[nums[i]] += 1; // this is for increasing frequency of any element in array
// 			if (map[nums[i]] > 1)
// 			{ // if any element is present more then once then we will enter in this loop
// 				return true;
// 			}
// 		}
// 		// if no duplicate elements then return false
// 		return false;
// 	}
// };