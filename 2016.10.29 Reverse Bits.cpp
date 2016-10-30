class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        string tmp="";

        for(int i=31;i>=0;i--){
            tmp.push_back((n%2)+'0');
            n>>=1;
        }
        std::bitset<32> bVal(tmp);
        return bVal.to_ulong();
    }
};
