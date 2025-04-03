class Solution {
public:
    int firstUniqChar(string s)
    {
        int freq[26] = {0};
        int len = s.length();
        for (char i : s)
        {
            freq[i - 'a']++;
        }
        for (int i = 0; i < len; i++)
        {
            if (freq[s[i] - 'a'] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
