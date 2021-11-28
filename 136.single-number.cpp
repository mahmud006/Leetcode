/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_set<int> s;
        for (int i : nums)
        {
            if (s.count(i) == 1)
            {
                s.erase(i);
            }
            else
            {
                s.insert(i);
            }
        }
        return *s.begin();
    }
};
// @lc code=end
