class Solution {
public:
    int myAtoi(string str) {
        long result = 0L;
        int count = 0;
        int exceed = 0;

        int i = 0;
        int flag = 0;
        int length = str.length();
        
        // i 是一個類指標 會遍歷所有空格直到第一個非空格字元
        // i < length 是為了控制當字串全為空格時 會成為無限迴圈
        while (str[i] == ' ' && i < length) 
           i++;

        // 碰到+ 或 - 設定flag 然後讓i進入下一格
        if (str[i] == '-') {
            flag = 1;
            i++;
        }
        
        else if (str[i] == '+') i++;
        
        // 從當前的i(非空格的開頭+正副號後的那一個字元) 遍歷直到下一個非數字
        // 如果非數字就結束並且回傳0
        for (; i < length; i++) {
            if (str[i] > '9' || str[i] < '0') {
                
                break;
            }
            // 溢出判定
            if (exceed >= 10) return result = flag ? INT_MIN : INT_MAX;
            
            // 本題重點
            result = result * 10 + str[i] - '0';
            exceed++;
        }

        // 溢出判定
        if (result > INT_MAX || result < INT_MIN) 
            return result = flag ? INT_MIN : INT_MAX;
        
        // 判定正負並且回傳
        else 
            return result = (flag == 1) ? result * -1 : result;
    }
};
