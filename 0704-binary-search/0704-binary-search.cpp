class Solution {
public:
    int binarysearch(vector<int> &nums,int target,int lo,int hi){
        if(lo>hi){
            return -1;
        }
        int mid = lo + (hi-lo)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            lo = mid+1;
        }
        else if(nums[mid]>target){
            hi = mid-1;
        }
        return binarysearch(nums,target,lo,hi);
    }
    int search(vector<int>& nums, int target) {
        int a = binarysearch(nums,target,0,nums.size()-1);
        return a;
    }
};