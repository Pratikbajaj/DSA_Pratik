class Solution {
public:
    bool isPalindrome(int x) {
        long long temp=x;
        long long rev=0;
        if (x<0) return false;
        while(temp!=0){
            int n=temp%10;
            rev=rev*10+n;
            temp=temp/10;
        }
        if(rev==x) return true;
        else return false;
    }
};