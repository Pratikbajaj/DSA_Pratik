class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> num;
        int val=0;
        int maxi=0;
        for(int x:nums){
            num[x]++;
        }
        for(auto it:num){
            cout<<it.second<<endl;
            if(it.second>nums.size()/2){
                val = it.first;
                maxi=it.second;
            }
            maxi=max(maxi,it.second);
        }
        return val;
    }
};