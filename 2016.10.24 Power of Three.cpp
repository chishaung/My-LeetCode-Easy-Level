class Solution {
public:
    bool isPowerOfThree(int n) {
        int res = n;
        if ( n == 1 || n == 3) return true;
        if ( n < 3) return false;
        
        while (res > 9) {
            if (res % 3 != 0) return false;
            res = res / 3;
        }
        
        if (res == 9) return true;
        else return false;
    }
};
