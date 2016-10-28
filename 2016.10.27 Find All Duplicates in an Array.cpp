class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //Method 1: brute force - sort and loop
        
        
        //Method 2: unorder_map -285ms
        
        unordered_map<int, int> m;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        
        for (auto it = m.begin(); it != m.end(); it++) {
            if (it->second == 2) result.push_back(it->first);
        }
        return result;
        
        
        
    }
};
