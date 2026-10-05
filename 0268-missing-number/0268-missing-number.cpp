class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        int ans = N;                  
        for (int i = 0; i < N; i++) {
            ans ^= i ^ nums[i];
        }
        return ans;
    }
};