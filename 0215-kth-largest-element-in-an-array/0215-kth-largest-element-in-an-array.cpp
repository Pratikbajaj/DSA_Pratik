class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int j=0;
        while(j<k-1){
            pq.pop();
            j++;
        }
        return pq.top();
    }
};