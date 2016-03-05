// 就當公式背下來吧..

class NumArray {
public:
    NumArray(vector<int> &nums) {
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            my_num.push_back(sum);
        }
    }

    int sumRange(int i, int j) {
        
        return my_num[j] - my_num[i-1];
    }
    
private:
    vector<int> my_num;
    int sum;
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);
