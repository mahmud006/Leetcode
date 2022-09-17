class Solution {
public:
    int countOdds(int low, int high) {
        high%2 == 0 ? high = (high/2) : high = (high/2) + 1;
        low = low/2;
        return (high-low);
    }
};