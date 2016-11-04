class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i;
        int flag = 0;
        if (strs.size() < 1) return {};
        if (strs.size() == 1) return strs[0];

        for (i = 0;;i++) {
            if (flag == 1) break;
            for (int j = 1; j < strs.size(); j++) {
                if (strs[0][i] != strs[j][i]) {
                    flag = 1;
                    break;
                }
            }
        }
        
        return strs[0].substr(0,i-1);
    }
};
