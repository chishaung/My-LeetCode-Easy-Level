class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        
        // Method 1: unordered_map with 2 loop
        
        unordered_map<int, int> m;
        vector<int> res;
        for (int i = 0; i < nums1.size(); i++) {
            m[nums1[i]]++;    
        }
        
        for (int i = 0; i < nums2.size(); i++) {
            if (m[nums2[i]] > 0) {
                res.push_back(nums2[i]);
                m[nums2[i]]--;
            }
        }
        
        return res;

        
    }
};
