class Solution {
public:
    bool checkBit(int n, int pos)
    {
        return (n & (1 << pos)) > 0;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> res;
        int n = nums.size();
        int nsubset = 1 << n;
        for (int i = 0; i < nsubset; i++)
        {
            vector<int> subset;
            for (int j = 0; j < nums.size(); j++)
            {
                if (checkBit(i, j))
                    subset.push_back(nums[j]);
            }
            res.push_back(subset);
        }
        return res;
    }
};