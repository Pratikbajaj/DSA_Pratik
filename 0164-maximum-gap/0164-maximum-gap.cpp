class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int diff = 0;
        if(nums.size()<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(diff<nums[i+1]-nums[i]){
                diff = nums[i+1] - nums[i];
            }
        }
        return diff;
    }
};