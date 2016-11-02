class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.size();
        char tmp;
        bool hold1 = false, hold2 = false;
        while (end > start) {
              
              if (hold1 == true && hold2 == true) {
                  tmp = s[start];
                  s[start] = s[end];
                  s[end] = tmp;
                  hold1 = false;
                  hold2 = false;
                  start++;
                  end--;
              }
              
              if (!hold1) {
                
                  if (s[start] == 'a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' || s[start] == 'u' || s[start] == 'A' || s[start] == 'E' || s[start] == 'I' || s[start] == 'O' || s[start] == 'U')
                      hold1 = true;
                  else start++;
              }
              
              if (!hold2) {
                  if (s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' || s[end] == 'u' || s[end] == 'A' || s[end] == 'E' || s[end] == 'I' || s[end] == 'O' || s[end] == 'U')
                      hold2 = true;
                  else end--;
              }
              
        }
        return s;
    }
};
