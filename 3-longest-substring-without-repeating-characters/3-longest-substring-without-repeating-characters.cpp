class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> vis(256, -1);
        int start = -1, res = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (vis[s[i]] > start)
            {
                start = vis[s[i]];
            }
            vis[s[i]] = i;
            res = max(i - start, res);
        }
        return res;
    }
};