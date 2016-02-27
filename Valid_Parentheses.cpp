// This question only give the input with 6 chars

class Solution {
public:
    bool isValid(string s) {
        string left = {"([{"};
        string right = {")]}"};
        stack<char> stk;
        
        for (char c : s) {
            
            // if ([{ found in s, push into stack and move to next char
            
            if (left.find(c) != string::npos) 
                stk.push(c);
                
            else {
                // if can not find any left, false(only 6 chars can be input)
                if (stk.empty() || stk.top() != left[right.find(c)]) return false;
                
                else stk.pop();
            }
        
           
        }
        return stk.empty();
    }
    
};
