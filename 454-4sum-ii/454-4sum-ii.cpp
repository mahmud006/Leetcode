class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int>st;
        int n = nums1.size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                //cout << nums1[i]+nums2[j] << " ";
                st[nums1[i]+nums2[j]]++;
            }
        }
        
        // for(int i=0; i<st.size(); i++){
        //     cout << st[i] << " ";
        // }
        
        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int s = (nums3[i] + nums4[j]);
                //cout << s << " ";
                if(s!=0){
                    s = s*(-1);
                }
                //cout << s << " ";
                if (st.count(s)){
                    cnt+= st[s];
                }
            }
        }
        return cnt;
    }
};