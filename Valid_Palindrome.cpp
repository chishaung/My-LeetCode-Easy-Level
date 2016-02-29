class Solution {
public:
    bool isPalindrome(string s) {
        // 找出頭跟尾
        int begin, end;
        begin = 0; end = s.length()-1;
       
        // 開始LooP: head++ end-- 直到 end > head 就是找出中心點了
        while (end > begin) {
            if (!(isalnum(s[begin]))) begin++;
            else if (!(isalnum(s[end]))) end--;
            else if (tolower(s[begin]) != tolower(s[end])) return false;
            else {begin++; end--;}
        }
        
        return true;
    }
};
