/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int mx = 0,res;
        for(auto x:nums){
            if(mp[x]>mx){
                mx = mp[x];
                res = x;
            }
        }
        return res;
    }
};
// @lc code=end

