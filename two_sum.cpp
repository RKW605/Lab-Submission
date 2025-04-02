// vector<int> twoSum(vector<int>& nums, int target)
//     {
//         map<int, int> mpp;
//         int size = nums.size();
//         for (int i = 0; i < size; i++)
//         {
//             int complement = target - nums[i];
//             if (mpp.find(complement) != mpp.end() && mpp[complement] != i)
//             {
//                 return {mpp[complement], i};
//             }
//             mpp[nums[i]] = i;
//         }
//         return {};
//     }
