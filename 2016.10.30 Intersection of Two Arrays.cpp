class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {


        // Method 1: set and find() -- 13ms -- 33.77%
        
        set<int> a;
        set<int> b;
        vector<int> res;
        for (int i = 0; i < nums1.size(); i++) a.insert(nums1[i]);
        for (int i = 0; i < nums2.size(); i++) b.insert(nums2[i]);
        for (set<int>::iterator it = a.begin(); it !=a.end(); ++it) {

            if (b.find(*it) != b.end()) {
                res.push_back(*it);
            }
        }
        return res;
        
        

        
        
    }
};
