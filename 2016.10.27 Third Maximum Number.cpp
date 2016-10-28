class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // Method 1: sort and unique
        
        sort(nums.begin(), nums.end(), greater<int>());
        vector<int>::iterator it = unique(nums.begin(), nums.end());

        int idx = it - nums.begin();
        

        
        if (idx == 2) return nums[0];
        if (idx == 1) return nums[1];
        if (idx == 0) return 0;
        else return nums[2];
        
        
        // Method 2: set
        /*
        set<int> top3;
        for (int num : nums) {
            top3.insert(num);
            if (top3.size() > 3)
                top3.erase(top3.begin());
        }
    
        return top3.size() == 3 ? *top3.begin() : *top3.rbegin();
        */
    }
};
