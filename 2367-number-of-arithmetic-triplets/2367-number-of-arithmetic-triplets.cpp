class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        vector<int> status(nums.size(), 0);
        int chk, ans =0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                chk = nums[j]-nums[i];
                if(chk==diff){
                    status[i]++;
                    status[j]++;
                    if(status[i]==2){
                        ans++;
                    }
                    break;
                }
            }
        }
        return ans;
    }
};