/*
 * @lc app=leetcode id=1089 lang=cpp
 *
 * [1089] Duplicate Zeros
 */

// @lc code=start
class Solution
{
public:
    void duplicateZeros(vector<int> &arr)
    {
        int x = arr.size();
        int j = 1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (j > x)
            {
                break;
            }
            else
            {
                if (arr[i] == 0)
                {
                    arr.insert(arr.begin() + i + 1, 0);
                    i++;
                }
            }
            j++;
        }
        arr.erase(arr.begin() + j - 1, arr.end());
    }
};
// @lc code=end
