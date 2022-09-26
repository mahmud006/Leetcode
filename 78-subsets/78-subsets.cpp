class Solution {
public:
    void gen_subsets(int curr, vector<int> &subset, vector<int> &arr, vector<vector<int>> &res)
    {
        if (curr == arr.size())
        {
            res.push_back(subset);
            return;
        }
        // arr[curr] include
        subset.push_back(arr[curr]);
        gen_subsets(curr + 1, subset, arr, res);
        subset.pop_back();

        // arr[curr] exclude
        gen_subsets(curr + 1, subset, arr, res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        gen_subsets(0, subset, nums, res);
        return res;
    }
};