class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int end_A = m - 1;
        int end_B = n - 1;
        int end_List = m + n - 1;
        
        // Start from the end so it will not override the head value;
        while(end_A >=0 && end_B >= 0) {
            if (A[end_A] > B[end_B]) {
                A[end_List] = A[end_A];
                end_List--;
                end_A--;
            }
            
            else {
                A[end_List] = B[end_B];
                end_List--;
                end_B--;
            }
        }
        while (end_B >= 0) {
            A[end_List] = B[end_B];
            end_List--;
            end_B--;
        }
        
    }
};
