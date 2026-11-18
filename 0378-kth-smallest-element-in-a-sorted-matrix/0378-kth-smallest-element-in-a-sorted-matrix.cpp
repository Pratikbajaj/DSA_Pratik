class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       priority_queue<int> pq;
       int count=0;
       for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                pq.push(matrix[i][j]);
                count++;
                if(count>k){
                    pq.pop();
                }
            }
       }
       int ans = pq.top();
       return ans;
    }
};