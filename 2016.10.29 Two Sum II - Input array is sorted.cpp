class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0, j = numbers.size() - 1; ; ) {
            if (numbers[i] + numbers[j] - target == 0) return {++i, ++j};
            else if (numbers[i] + numbers[j] - target > 0) j--;
            else i++;
        }
        return {0,0};
    }
};
