/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1;
        int mx_water = 0;
        while (left < right)
        {
            int range = right - left;
            int contained_water = min(height[left], height[right]) * range;
            mx_water = max(mx_water, contained_water);
            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return mx_water;
    }
};
// @lc code=end
