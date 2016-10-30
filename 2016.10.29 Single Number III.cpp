class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        // Method 1: unordered_map with 2 loops -- 29ms 13.25%
        /*
        unordered_map<int, int> m;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        
        for (auto it : m) {
            if (it.second == 1) result.push_back(it.first);
        }
        
        return result;
        */
        
        // Method 2: Bitwise -- Xor 26ms
        
        // 1.assume that A and B are the two elements which we want to find;
        // 2.use XOR for all elements,the result is : r = A^B,we just need to distinguish A from B next step;
        // 3.if we can find a bit '1' in r,then the bit in corresponding position 
        //   in A and B must be different.We can use {last = r & (~(r-1))} to get the last bit 1 int r;
        // 4.we use last to divide all numbers into two groups,then A and B 
        //   must fall into the two distrinct groups.XOR elements in eash group,get the A and B.
        
        
        int r = 0, n = nums.size(), i = 0, last = 0;
        vector<int> ret(2, 0);
        
        for (i = 0; i < n; ++i) 
            r ^= nums[i];
        
        last = r & (~(r - 1));
        for (i = 0; i < n; ++i)
        {
            if ((last & nums[i]) != 0)
                ret[0] ^= nums[i];
            else
                ret[1] ^= nums[i];
        }
        
        return ret;
    }
};
