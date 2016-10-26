class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // Method with simple map
        /*
        unordered_map<int, int> m;
        
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
            if (m[nums[i]] > nums.size()/2) return nums[i];
        }
        return 0;
        */
        
        // Method with randomly pick an index
        int index;
        int count = 0;
        int n = nums.size();
        
        srand(unsigned(time(NULL)));
        
        while (true) {
            index = rand() % n;
            for (int i = 0; i < n; i++) {
                if (nums[i] == nums[index]) {
                    count++;
                    if (count > (n / 2)) return nums[index];
                }
            }
            count = 0;
        }    
        return -1;
        
    }
};
