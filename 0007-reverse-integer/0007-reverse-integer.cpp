class Solution {
public:
    int reverse(int x) {
        long long int sum=0;
        while(x!=0){
            long long int n=x%10;
            x=x/10;
            if (sum > 214748364 || sum < -214748364)
                return 0;
            if (sum == 214748364 && n > 7)
                return 0;
            if (sum == -214748364 && n < -8)
                return 0;
            sum=(sum*10)+n;
        }
        return sum;
    }
};
