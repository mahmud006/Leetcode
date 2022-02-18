/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res;
        // unordered_set<int> s1(nums1.begin(),nums1.end());
        vector<int> s1(nums2.begin(), nums2.end());

        for (auto x : nums1)
        {
            auto it = find(s1.begin(), s1.end(), x);
            if (it != s1.end())
            {
                res.push_back(x);
                int index = it - s1.begin();
                s1.erase(s1.begin() + index);
            }
        }
        return res;
    }
};
// @lc code=end
