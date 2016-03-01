class Solution {
public:
    int reverse(int x) {
        
        int long long result = 0;
        if (x == 0) return 0;
        
        
        while (x != 0) {
            result = result * 10 + x % 10; 
            x = x / 10;
        }
        
        if (result > INT_MAX || result < INT_MIN) return 0;
        
        return result;
        
    }
};
