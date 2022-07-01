class Solution {
public:
    int findMin(vector<int>& nums) {
        int L = 0, R = nums.size()-1;
        int min = nums[R], mid;
        while(L<=R){
            mid = L + (R-L)/2;
            if(nums[mid]<min){
                min = nums[mid];
                R = mid - 1;
            }
            else{
                L = mid + 1;
            }
        }
        return min;
    }
};