class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i=0;i<asteroids.size();i++){
            bool alive = true;
            while(!st.empty() && st.top()>0 && asteroids[i] < 0 && alive){
                if(abs(asteroids[i])>st.top()){
                    st.pop();
                }
                else if(abs(asteroids[i])==abs(st.top())){
                    st.pop();
                    alive = false;
                }
                else{
                    alive = false;
                }
            }
            if(alive) st.push(asteroids[i]);

        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};