/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long a = x, chk, r = 0;
        while (x != 0)
        {
            chk = x % 10;
            r = r * 10 + chk;
            x = x / 10;
        }
        if (a < 0)
        {
            r = r * -1;
        }
        if (a == r)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
// @lc code=end
