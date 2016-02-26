class Solution {
public:
    int myAtoi(string str) {
        int num = 0;
        int sign = 1;
        const int n = str.length();
        int i = 0;

        while (str[i] == ' ' && i < n) i++;
        if (str[i] == '+') {
            i++;
        } 
        
        else if (str[i] == '-') {
            sign = -1;
            i++;
        }
        
        for (; i < n; i++) {
            if (str[i] < '0' || str[i] > '9')
            break;

            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (str[i] - '0') > INT_MAX % 10)) {
                return sign == -1 ? INT_MIN : INT_MAX;
            }
            
            num = num * 10 + str[i] - '0';
        }

    return num * sign;
    }
};


/*
我自己寫的 無法通過 "   - 321"
*/





class Solution {
public:
    int myAtoi(string str) {
        long result = 0L;
        int count = 0;
        int i = 0;
        int flag = 0;
        int length = str.length();
        
        while ( (!(str[i] >= '0') || !(str[i] < '9')) && i < length) 
           i++;
        

        
        if (str[i-1] == '+' && str[i-2] == '-') return 0;
        
        if (str[i-1] == '-') {
            if (str[i-2] == '+') return 0;
            flag = 1;
        }
        
        //cout << "Flag: " << flag << endl;
        
        for (; i < length; i++) {
            if (str[i] > '9' || str[i] < '0') break;
            result = result * 10 + str[i] - '0';
        }
        
        if (result > INT_MAX || result < INT_MIN) 
            return result = flag ? INT_MIN : INT_MAX;
        
        else 
            return result = (flag == 1) ? result * -1 : result;
    }
};
