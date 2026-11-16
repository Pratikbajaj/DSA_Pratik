class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> mx;
        for(int i=0;i<nums.size();i++){
            mx.push(nums[i]);
        }
        int first = mx.top();
        mx.pop();
        int second = mx.top();

        return ((first-1)*(second-1));
    }
};