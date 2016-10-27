class Solution {
public:

    bool isHappy(int n) {
        int a,b;
        while(n >= 10){
            n = sum(n); //sum the squares of its digits when it's bigger than 10
        }
        if(n==1 || n == 7)//since the happy number under 10 is only 1 and 7
        return true;
        else return false;
    }

    int sum(int n) {
        int count = 0;
        while(n > 0){
            count += pow(n % 10,2);
            n /= 10;
        }
        return count;
    }
};
