class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        int temp = nums.size() - 1;
        if (temp < 0)
            return 0;
        sort(nums.begin(), nums.end());
        int sequence = 1, largest = 1;
        for (int i = 0; i < temp; i++)
        {
            if (nums[i] == nums[i + 1])
                continue;
            else if (nums[i] + 1 == nums[i + 1])
                sequence++;
            else
                sequence = 1;
            largest = max(largest, sequence);
        }
        return largest;    
    }
};
