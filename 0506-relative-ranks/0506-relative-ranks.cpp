class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        priority_queue<pair<int,int>> mx;
        for(int i=0;i<n;i++) mx.push({score[i],i});

        vector<string> ans(n);
        int place=1;
        while(!mx.empty()){
            int id=mx.top().second;
            mx.pop();

            if(place==1) ans[id] = "Gold Medal";
            else if(place==2) ans[id] = "Silver Medal";
            else if(place==3) ans[id] = "Bronze Medal";
            else ans[id] = to_string(place);
            place++;
        }    
        return ans;
    }
};