class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i = 1, j = nums.size()-2;
        int arr1[nums.size()], arr2[nums.size()];
        arr1[0] = nums[0], arr2[nums.size()-1] = nums[nums.size()-1];
        while(i<=nums.size() && j>=0){
            arr1[i] = nums[i] + arr1[i-1];
            arr2[j] = nums[j] + arr2[j+1];
            i++;
            j--;
        }
        for(int i=0; i<nums.size(); i++){
            if(arr1[i]==arr2[i]) return i;
        }
        return -1;
    }
};