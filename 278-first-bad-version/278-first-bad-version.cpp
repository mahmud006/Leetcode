// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int L=0, R=n-1;
        while(L<=R){
            int mid = L + (R-L)/2;
            if(isBadVersion(mid)){
                R = mid - 1;
            }
            else{
                L = mid + 1;
            }
        }
        return L;
    }
};