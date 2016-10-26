class Solution {
public:
    bool isPowerOfTwo(int n) {
        int res = n;
        if ( n <= 0 ) return false;
        if ( n == 1 || n <= 2) return true;
        
        while (res > 2) {
            if (res % 2 != 0) return false;
            res = res / 2;
        }
        
        if (res % 2 != 0) return false;
        else return true;
        
        
        
        // trick:
        // return (n > 0) && (n & (n - 1)) == 0;
    }
};
