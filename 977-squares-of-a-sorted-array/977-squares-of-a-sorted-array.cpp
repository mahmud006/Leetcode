class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int mn = INT_MAX;
        int idx;
        for(int i=0; i<nums.size(); i++){
            if(abs(nums[i]*nums[i])<mn){
                mn = abs(nums[i]*nums[i]);
                idx = i;
            }
        }
        vector<int> arr;
        int L = idx-1, R = idx+1;
        arr.push_back(mn);
        int j = 0;
        cout << L << " " << R <<endl;
        while(L>=0 && R<=nums.size()-1){
            if(nums[L]*nums[L] <= nums[R]*nums[R]){
                cout << nums[L];
                arr.push_back(nums[L]*nums[L]);
                j++;
                L--;
            }
            else if(nums[L]*nums[L] > nums[R]*nums[R]){
                cout << nums[R];
                arr.push_back(nums[R]*nums[R]);
                j++;
                R++;
            }
        }
        while(L>=0){
            arr.push_back(nums[L]*nums[L]);
            L--;
        }
        while(R<nums.size()){
            arr.push_back(nums[R]*nums[R]);
            R++;
        }
        return arr;
    }
};