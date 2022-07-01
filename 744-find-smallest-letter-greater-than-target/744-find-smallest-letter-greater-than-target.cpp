class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int L = 0, R = letters.size()-1;
        char ans=' ';
        while(L<=R){
            int mid = L + (R-L)/2;
            if(letters[mid]>target){
                ans = letters[mid];
                R = mid - 1;
            }
            else if(letters[mid]<=target){
                L = mid +1;
            }
        }
        if(ans==' ') {
            return letters[0];
        }
        return ans;
    }
};