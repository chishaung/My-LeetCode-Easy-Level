class Solution {
public:
    
    string generate(string s){
        int len = s.size();
        string result;
        char word;
        int count = 1;
        word = s[0];
        int j = 0;
        int i;
        
        while(j < len) {
            
            word = s[j];
            
            // Not sure why this is faster
            i = j;
            while(s[i] == s[i+1]){
                count++;
                i++;
            }
            result = result + to_string(count) + word;
            j+=count;
            count = 1;
            
            
            /*
            while(s[j] == s[j+1]) {
                
                count++;
                j++;
                
            }
            result = result + to_string(count) + word;
            j++;
            count = 1;
            */
        }
        return result;
    }

    string countAndSay(int n) {
        if ( n == 1 ) return "1";
        
        string s = "1";
        for (int i = 0; i < n - 1; i++) {
            s = generate(s);
        }
         return s;
            
        }
};
