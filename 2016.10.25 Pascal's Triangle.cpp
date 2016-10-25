class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> result;
        vector<int> tmp, tmp2;
        if (numRows == 0) return result;
        
        //先把第一層放好
        tmp.push_back(1);
        result.push_back(tmp);
        
        
        
        for (int i = 0; i < numRows - 1; i++) {
            
            // 前後補上0
            tmp.insert(tmp.begin(), 0);
            tmp.push_back(0);
            
            // 兩兩加起來放到下一層
            for (int j = 0; j < tmp.size() - 1; j++) {
                tmp2.push_back(tmp[j] + tmp[j+1]);
            }
            
            result.push_back(tmp2);
            tmp = tmp2;
            tmp2.clear();
        }
        
        return result;
    }
};
