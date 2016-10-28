class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        
        
        int area1 = (C-A)*(D-B);
        int area2 = (G-E)*(H-F);
        
        // 如果兩個方形沒交集
        if(A>=G || E>=C || B>=H || F>=D){return area1 + area2;}

        int right = min(C, G); 
        int left = max(A, E);
        int top = min(D, H);
        int bot = max(B, F);
        
        return area1 + area2 - (right - left) * (top - bot);

        
    }
};
