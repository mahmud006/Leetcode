/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int L = 0, R = n;
        while(L<=R){
            int mid = L + (R-L)/2;
            if(guess(mid)==0){
                return mid;
            }
            else if(guess(mid)==-1){
                R = mid - 1;
            }
            else{
                L = mid + 1;
            }
        }
        return R;
    }
};