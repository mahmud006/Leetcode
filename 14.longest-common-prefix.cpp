/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int sz = strs.size();
        string st;
        st = strs[0];

        for (int i = 1; i < sz; i++)
        {
            st = fn(st, strs[i]);
        }
        return st;
    }
    string fn(string s1, string s2)
    {
        int sz1 = s1.size();
        int sz2 = s2.size();
        string str;
        for (int i = 0, j = 0; i < sz1, j < sz2; i++, j++)
        {
            if (s1[i] != s2[j])
            {
                break;
            }
            else
            {
                str.push_back(s1[i]);
            }
        }
        return str;
    }
};
// @lc code=end
