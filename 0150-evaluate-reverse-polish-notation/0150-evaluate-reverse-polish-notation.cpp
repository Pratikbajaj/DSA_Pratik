class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int total = 0;
        int op2,op1;
        for(const string& c :tokens){
            if(c=="+"){
                op1 = st.top();
                st.pop();
                op2 = st.top();
                st.pop();
                int op3 = op2 + op1;
                st.push(op3);
            }else if(c=="-"){
                op1 = st.top();
                st.pop();
                op2 = st.top();
                st.pop();
                int op3 = op2 - op1;
                st.push(op3);
            }else if(c=="*"){
                op1 = st.top();
                st.pop();
                op2 = st.top();
                st.pop();
                int op3 = op2 * op1;
                st.push(op3);
            }else if(c=="/"){
                op1 = st.top();
                st.pop();
                op2 = st.top();
                st.pop();
                int op3 = op2 / op1;
                st.push(op3);
            }
            else{
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};