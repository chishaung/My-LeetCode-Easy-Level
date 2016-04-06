class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // Moving all non-0 elements to the front of the array
        if (nums.size() == 0) return;
        
        int len = 0;
        for (int i = 0; i < nums.size(); i++) {
            if ( nums[i] != 0) {
                swap(nums[i], nums[len]);
                len++;
            }
        }
    }
};
