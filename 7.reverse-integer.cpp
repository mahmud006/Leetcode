/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
public:
    long long reverse(long long x)
    {
        string s = to_string(x);
        string st = string(s.rbegin(), s.rend());
        long long a = stoll(st);
        if (a < -2147483648 || a > 2147483647)
        {
            return 0;
        }
        else
        {
            if (x < 0)
            {
                return a * -1;
            }
            else
            {
                return a;
            }
        }
    }
};
// @lc code=end
