class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int total = 0;
        int op2,op1;
        for(const string& c :tokens){
            if(c=="+"||c=="-"||c=="*"||c=="/"){
                op1 = st.top();
                st.pop();
                op2 = st.top();
                st.pop();
                if(c=="+"){
                    st.push(op2 + op1);
                }else if(c=="-"){
                    st.push(op2 - op1);
                }else if(c=="*"){
                    st.push(op2 * op1);
                }else if(c=="/"){
                    st.push(op2 / op1);
                }
            }
            else{
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};