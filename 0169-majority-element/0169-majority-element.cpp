class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int val = 0;
        int count =0;
        for(int x:nums){
            if(count==0){
                val=x;
            }
            if(x==val){
                count++;
            }
            else{
                 count--;
            }
        }
        return val;
    }
};