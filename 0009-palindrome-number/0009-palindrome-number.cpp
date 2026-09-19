class Solution {
public:
    bool isPalindrome(int x) {
        long long temp=x;
        long long int rev,n;
        if (x<0) return false;
        while(temp!=0){
            n=temp%10;
            rev=rev*10+n;
            temp=temp/10;
        }
        if(rev==x) return true;
        else return false;
    }
};