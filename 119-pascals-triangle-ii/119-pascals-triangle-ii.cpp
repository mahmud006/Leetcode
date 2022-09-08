class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        v.push_back(1);
        for(int i=1; i<=rowIndex; i++){
            vector<int> v1;
            v1.push_back(1);
            for(int j=0; j<v.size()-1; j++){
                v1.push_back(v[j]+v[j+1]);
            }
            v1.push_back(1);
            v = v1;
        }
        return v;
    }
};