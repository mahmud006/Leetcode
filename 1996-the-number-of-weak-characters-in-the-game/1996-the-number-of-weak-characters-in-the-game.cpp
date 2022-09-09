class Solution {
public:
    static bool cmp(const vector<int>& v1, const vector<int>& v2)
    {
        if(v1[0]==v2[0]){
            return v1[1] > v2[1];
        }
        return v1[0] < v2[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), cmp);
        int mx = 0, ans = 0;
        for(int i=properties.size()-1; i>=0; i--){
            if(properties[i][1]<mx){
                ans++;
            }
            mx = max(properties[i][1], mx);
        }
        return ans;
    }
};