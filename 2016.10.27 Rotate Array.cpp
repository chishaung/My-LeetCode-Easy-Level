class Solution {
public:

    
    void rotate(vector<int>& nums, int k) {
        
    
    // Method 1: using push_back + erase since it's vector -- 19ms
    
    // 數組長度    
    int n = nums.size();
    // 起始位置
    int start = 0;
    // 轉移個數
    int end = n - (k % n);
    
        if ( k != 0) {
            for (int i = start; i < end; i++) {
                nums.push_back(nums[i]);
            }
            nums.erase(nums.begin(), nums.begin()+end);
        }
    
    
    // Method 2: extra space -- 19ms
    /*
    // 數組長度    
    int n = nums.size();
    // 起始位置
    int start = 0;
    // 轉移個數
    int tail = n - (k % n);
    
    vector<int> nums2;
    for (int i = tail; i < n; i++) 
        nums2.push_back(nums[i]);
        
    for (int i = 0; i < tail; i++) 
        nums2.push_back(nums[i]);
    
    nums = nums2;
    */
    
    // Method 3: Bruce Force -- time exceeded
    /*
    int n = nums.size();
    for (int i = 0; i < k; i++) {
        for (int j = n-1; j > 0; j--) {
            iter_swap(nums.begin()+j, nums.begin()+j-1);
        }
    }
    */
    
    
    }
};


