// 概念為：如果今天數字為回文 那即使是Reverse過後數值也會跟原本的數字相同大小
// 比方說：50005, 2332, 4455665544
class Solution {
public:
    bool isPalindrome(long long int x) {
        if (x < INT_MIN || x > INT_MAX) return false;
        int sum = 0;
        int target = x;
        while (x > 0) {
            sum = sum * 10 + x % 10;
            x = x / 10;
        }
        
        return sum == target;
        
        
    }
};


// 這樣子做可以更加直觀 但是題目規定了不能佔用另外的額外空間
// 因此還是要用上面的方式下去寫
class Solution {
public:
    bool isPalindrome(long long int x) {
        if (x < INT_MIN || x > INT_MAX) return false;
        
        string s = to_string(x);
        
        // 1 for -, 0 for +
        int flag = s[0] == '-' ? 1 : 0;
        if (flag == 1) return false;
        if (s.size() <= 1) return true;
        int start = 0; 
        int end = s.length()-1;
        while (end > start) {
            if (s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
        
    }
};
