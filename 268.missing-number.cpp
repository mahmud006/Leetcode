/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int i = 0, res = nums.size();
        for (auto num : nums)
        {
            res ^= num;
            res ^= i;
            i++;
        }
        return res;
    }
};
/////solution - 2////
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        unordered_set<int> st(nums.begin(), nums.end());
        for (int i = 0; i <= nums.size(); i++)
        {
            if (st.count(i) == 0)
            {
                return i;
            }
        }
        return {};
    }
};
// @lc code=end
