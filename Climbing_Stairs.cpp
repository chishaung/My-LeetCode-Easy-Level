// 這題重點在於分析題目
// n = 1的時候只有1 step = 1種
// n = 2的時候有1 or 2 steps = 2種
// n = 3的時候就有n = 1的種類 + n = 2的種類
// 如此可以看出這是一個Fibonacc函數
// 都知道這種方法可以用recursion解出
/*
if (n == 1) return 1;
if (n == 2) return 2;
return climbStairs(n-1) + climbStairs(n-2);
*/
// 但是效率非常的差
// 因此這邊改用Iteration的方式處理問題

class Solution {
public:
    int climbStairs(int n) {
        int pre2 = 1;
        int pre = 2;
        int cur = 0;
        if (n == 1) return 1;
        if (n == 2) return 2;
        
        for(int i = 3; i <= n; i++){
            cur = pre2 + pre;
            pre2 = pre;
            pre = cur;
        }
        return cur;
        
    }
};
