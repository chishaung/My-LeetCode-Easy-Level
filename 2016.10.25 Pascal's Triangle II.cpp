class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> result;
        vector<int> tmp;
        
        result.push_back(1);
        if (rowIndex == 0) return result;
        
        
        for (int i = 0; i < rowIndex; i++) {
            result.push_back(0);
            result.insert(result.begin(), 0);
            for (int j = 0; j < result.size() - 1; j++) {
                tmp.push_back(result[j] + result[j+1]);
            }
            result = tmp;
            tmp.clear();
        }
        
        return result;
        
    }
};
