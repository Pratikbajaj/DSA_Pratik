class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(res.empty()||res.back()[1]<nums[i][0]){
                res.push_back({nums[i][0],nums[i][1]});
            }
            else{
                res.back()[1]=max(res.back()[1],nums[i][1]);
            }
        }
        return res;
    }
};