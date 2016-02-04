/*
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. 
It doesn't matter what you leave beyond the new length.
*/


/*
今天這一題只需要求新vector的長度，其概念如下:
distance()可以找出範圍之內的長度
sort()可以將vector排列
unique()可以將重複的數組排列到vector的最後端，並且回傳一個iterator指向重複數組的最前端
begin()回傳vector的最前端的Iterator
標準的unique()用法為 sort() -> unique() -> erase()
此題只求長度，故不用多花效能處理其他部分
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        return distance(nums.begin(), unique(nums.begin(), nums.end()));
    }
};
