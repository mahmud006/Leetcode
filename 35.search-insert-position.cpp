/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        // return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int start = 0, end = nums.size(), mid;
        while (start < end)
        {
            mid = (start + end) / 2;
            if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        return start;
    }
};
// @lc code=end
