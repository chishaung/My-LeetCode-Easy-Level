class Solution {
public:
string addBinary(string a, string b) {
    string result;
    // 先Reverse, 這樣子才有辦法靠齊
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int val = 0, carry = 0;
    
    // 決定哪個字串比較長
    int length = (a.size() > b.size()) ? a.size() : b.size();
    for (int i = 0; i < length; i++) {
        // 把短字串用0補的一樣長
        int av = a.size() > i ? a[i] - '0' : 0;
        int bv = b.size() > i ? b[i] - '0' : 0;
        
        // 當下數字為0或1 -- 2 % 2 =0
        val = (av + bv + carry) % 2;
        // 一樣的方法決定是否進位
        carry = (av + bv + carry) / 2;
        
        // 插入當下數字
        result.insert(result.begin(), val + '0');
    }
    // 若carry為1 代表最後有進位 補一個1到最前面
    if (carry == 1) result.insert(result.begin(), '1');
    
    
    return result;
}
};
