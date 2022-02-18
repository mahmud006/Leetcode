/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        int res = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (mp[s[i]] == 1)
            {
                res = i;
                break;
            }
        }
        return res;
    }
};
// @lc code=end
