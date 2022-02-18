/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        // 1st
        //  sort(s.begin(), s.end());
        //  sort(t.begin(), t.end());
        //  if (s == t)
        //      return true;
        //  return false;

        // 2nd
        // if (s.length() != t.length())
        //     return false;
        // int n = s.length();
        // unordered_map<char, int> counts;
        // for (int i = 0; i < n; i++)
        // {
        //     counts[s[i]]++;
        //     counts[t[i]]--;
        // }
        // for (auto count : counts)
        //     if (count.second)
        //         return false;
        // return true;

        // 3rd
        if (s.length() != t.length())
            return false;
        int n = s.length();
        int counts[26] = {0};
        for (int i = 0; i < n; i++)
        {
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
            if (counts[i])
                return false;
        return true;
    }
};
// @lc code=end
