class Solution {
public:
    int lengthOfLastWord(string s) {
        int count =0;
        for(int c=s.size()-1;c>=0;c--){
            if(s[c]==' ' && count==0){
                continue;
            }
            if(s[c]==' '){
                break;
            }
            count++;
        }
        return count;
    }
};