/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int mx = 0, cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                cnt++;
                if (cnt > mx)
                {
                    mx = cnt;
                }
            }
            else
            {
                cnt = 0;
            }
        }
        return mx;
    }
};
// @lc code=end
