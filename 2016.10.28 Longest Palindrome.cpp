class Solution {
public:
    int longestPalindrome(string s) {
        
        
        // Palindrome的基礎概念為: 單獨字母的出現次數為奇數的個數只能為0或是1
        // 若次數為0或是1, 則直接回傳原來的字串, 不然便回傳s.length() - odd_nums + 1
        
        // Method: ordered_map, 2 loops -- 9ms
        /*
        unordered_map<char, int> m;
        int odd = 0;
        
        for (auto c : s) {
            m[c]++;
        }
        
        for (auto it : m) {
            if (it.second % 2 != 0) odd++;
        }
        
        return odd <= 1 ? s.size() : s.size() - odd + 1;
        */
        
        // Method: improved ordered_map, 1 loop -- 9ms
        
        unordered_map<char, int> m;
        int odd = 0;
        
        for (auto c : s) {
            m[c]++;
            if (m[c] % 2 != 0) odd++;
            else odd--;
        }
        
        return odd <= 1 ? s.size() : s.size() - odd + 1;
        
    }
};
