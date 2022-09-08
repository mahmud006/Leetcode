class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        v.push_back({1});
        for(int i=1; i<numRows; i++){
            vector<int> v1;
            v1.push_back(1);
            for(int j=0; j<v[i-1].size()-1; j++){
                v1.push_back(v[i-1][j] + v[i-1][j+1]);
                //cout << v[i-1][j] + v[i-1][j+1] << " ";
            }
            v1.push_back(1);
            v.push_back(v1);
        }
        return v;
    }
};