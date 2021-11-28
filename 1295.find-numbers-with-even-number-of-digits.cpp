/*
 * @lc app=leetcode id=1295 lang=cpp
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            string s = to_string(nums[i]);
            if (s.size() % 2 == 0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};
// @lc code=end
