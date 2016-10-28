class Solution {
public:
    vector<int> countBits(int num) {
        
        // Method 1: trick with bitwise -- 59ms
        vector<int> cnt(num + 1, 0);
        
        for (int i = 1; i <= num; i++) {
            cnt[i] = cnt[i & (i - 1)] + 1;      // i & (i - 1) is i without lowest 1 bit
        }
        
        return cnt;

        
        // Method 2: using bitset -- 73ms
        /*
        vector<int> result;
        
        for (int i = 0; i <= num; i++) {
            bitset<32> a(i);
            result.push_back(a.count());
        }
        
        return result;
        */
    }
};
