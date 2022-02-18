/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution
{
public:
#define ll long long
    int maxSubArray(vector<int> &nums)
    {
        ll mx = -100000, sum = 0;
        for (ll i = 0; i < nums.size(); i++)
        {

            sum += nums[i];
            if (sum > mx)
            {
                mx = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return mx;
    }
};
// @lc code=end
