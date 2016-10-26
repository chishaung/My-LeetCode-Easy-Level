class Solution {
public:
    int hammingWeight(uint32_t n) {
        // method with bitset<>
        /*
        bitset<32> res(n);
        return res.count();
        */
        
        // method without bitset
        int num = 0;
        while (n > 0) {
            if (n % 2 != 0) num++;
            n = n / 2;
        }
        return num;
    }
};
