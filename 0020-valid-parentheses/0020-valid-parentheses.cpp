// class Solution {
// public:
//     bool isValid(string s) {
//         int n=size(s);
//         stack<char> s1;
//         for(int i=0;i<n;i++){
//             if(s[i]=='(' || s[i]=='{' || s[i]=='['){
//                 s1.push(s[i]);
//             }
//             else {
//                 if(s1.empty()){
//                     return false;
//                 }
//                 if((s[i]==')' && s1.top()=='(')||
//                 (s[i]=='}' && s1.top()=='{')||
//                 (s[i]==']' && s1.top()=='[')){
//                     return false;
//                 }
//                 s1.pop();
//             }
//         }
//     return s1.empty();
//     }
// };
class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                s1.push(c);
            } else {
                if (s1.empty()) return false;
                char top = s1.top();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
                s1.pop();
            }
        }
        return s1.empty();
    }
};