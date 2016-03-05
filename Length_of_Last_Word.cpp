class Solution {
public:
    int lengthOfLastWord(string s) {
       
        // Remove all the white space in the string from back
        size_t pos = s.find_last_not_of(' ') + 1;
        s.erase(pos);
        
        // Loop until find another white space from back
        int len = s.size()-1;
        int i;
        
        for (i = len; i >= 0; i--) {
            if (s[i] == ' ') break;    
        }
        
    
    return len - i;
    }
};
