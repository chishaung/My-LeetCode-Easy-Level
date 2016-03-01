// 這題很簡單 遍歷整個array 然後當當下i的數字與target不同的時候就把他按順序放入原本array中
// 這樣子會override array但是題目本身不在意

class Solution {
public:
    int removeElement(vector<int>& nums, int target) {
        
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            
            if (nums[i] != target) {
                nums[index] = nums[i];
                index++;
            }
        }
        
        return index;
    
    }
};
