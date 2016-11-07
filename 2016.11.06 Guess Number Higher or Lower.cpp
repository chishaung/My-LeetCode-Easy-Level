// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int left = 1, right = n;
        int mid;

        
        while (true) {
            mid = (right - left) / 2 + left;
            
            if (guess(mid) == 0) return mid;
            
            else if (guess(mid) == -1) {
                right = mid - 1;
            }
            
            else if (guess(mid) == 1) {
                left = mid + 1;
            }
        }
        return mid;
    }
};
