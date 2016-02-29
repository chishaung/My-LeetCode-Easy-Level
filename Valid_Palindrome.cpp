class Solution {
public:
    bool isPalindrome(string s) {
        int begin, end;
        begin = 0; end = s.length()-1;
       
        
        while (end > begin) {
            if (!(isalnum(s[begin]))) begin++;
            else if (!(isalnum(s[end]))) end--;
            else if (tolower(s[begin]) != tolower(s[end])) return false;
            else {begin++; end--;}
        }
        
        return true;
    }
};
