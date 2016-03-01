class Solution {
public:
string addBinary(string a, string b) {
    string result;
    // 先Reverse, 這樣子才有辦法靠齊
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int val = 0, carry = 0;
    
    int length = (a.size() > b.size()) ? a.size() : b.size();
    for (int i = 0; i < length; i++) {
        int av = a.size() > i ? a[i] - '0' : 0;
        int bv = b.size() > i ? b[i] - '0' : 0;
        //cout << av << ' ' << bv << ' ' << length << endl;
        val = (av + bv + carry) % 2;
        carry = (av + bv + carry) / 2;
        result.insert(result.begin(), val + '0');
    }
    
    if (carry == 1) result.insert(result.begin(), '1');
    
    
    return result;
}
};
