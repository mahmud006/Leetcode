class Solution {
public:
    int search(vector<int>& nums, int target) {
        int L = 0, R = nums.size()-1; 
        while(L<=R){
            int mid = L + (R-L)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[L]<=nums[mid]){
                if(nums[L]<=target && target < nums[mid]){
                    R = mid - 1;
                }
                else{
                    L = mid + 1;
                }
            }
            else{
                if(nums[mid]<target && target <= nums[R]){
                    L = mid + 1;
                }
                else{
                    R = mid - 1;
                }
            }
        }
        return -1;
    }
};