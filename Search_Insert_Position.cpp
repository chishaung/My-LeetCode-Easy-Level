// Simple Binary Search 
// 找中間 比大小 改區間
// 如此循環


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int mid = 0;
        int end = nums.size()-1;
        
        
        while (end >= start) {
            mid = (end + start) / 2;
            if (nums[mid] == target) return mid;
            if (nums[start] == target) return start;
            if (nums[end] == target) return end;

            else if (target > nums[mid]) 
                start = mid+1;
                
            else if (target < nums[mid]) 
                end = mid-1;
                
        }
        return start;
    }
        

};
