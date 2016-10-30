class Solution {
public:

    int c_to_i (char c) {
        return c - 64;
    }
    int titleToNumber(string s) {
        int sum = 0;
        int times = 26;
        for (char c : s) {
            sum = sum * times + c_to_i(c);
        }
        
        return sum;
    }
};
