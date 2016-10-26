class Solution {
public:
    bool isPowerOfFour(int num) {
        
        
        // method without trick: bitset
        /*
        if (num == 1 || num == 4) return true;
        if (num < 16) return false;
    
        while (num > 15) {
            if (num % 4 != 0) return false;
            num = num / 4;
        }
        
        if (num == 4) return true;
        else return false;
        */
        
        // method with trick: bitset
        // the trick is: only one 1 in the bitset, and it should be located on even position.
        
        bitset<32> n(num);
        
        // count will return the number of 1's in the bitset.
        if (n.count() != 1) return false;
        
        
        for (int i = 0; i < 32; i++) {
            
            if(n[i] == 1 && i % 2 == 0) return true;
            
        }
        
        return false;
        
        
    }
};
