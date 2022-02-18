/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution
{
public:
#define ll long long
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res;
        unordered_set<int> s1(nums1.begin(), nums1.end());
        for (auto x : nums2)
        {
            if (s1.count(x))
            {
                res.push_back(x);
                s1.erase(x);
            }
        }
        return res;
    }
};
// @lc code=end
