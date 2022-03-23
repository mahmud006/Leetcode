/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */

// @lc code=start
class Solution
{
public:
    char backspaceCompare(string s, string t)
    {
        int sz1 = s.size(), sz2 = t.size();
        stack<char> st1;
        stack<char> st2;

        for (int i = 0; i < sz1; i++)
        {
            if (s[i] == '#')
            {
                if (!st1.empty())
                {
                    st1.pop();
                }
            }
            else
            {
                st1.push(s[i]);
            }
        }
        for (int i = 0; i < sz2; i++)
        {
            if (t[i] == '#')
            {
                if (!st2.empty())
                {
                    st2.pop();
                }
            }
            else
            {
                st2.push(t[i]);
            }
        }
        // return st2.size();
        //  if(st1.size()==st2.size()){
        //      //return true;
        //      while(!st1.empty() && !st2.empty()){
        //          if(st1.top()!=st2.top()){
        //              return false;
        //          }
        //          st1.pop();
        //          st2.pop();
        //      }
        //      return true;
        //  }
        if (st1 == st2)
        {
            return true;
        }
        return false;
    }
};
// @lc code=end
