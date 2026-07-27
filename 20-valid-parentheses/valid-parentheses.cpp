class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(!st.empty() and st.top()=='(')
                st.pop();
                else return false;
            }
            else if(s[i]==']'){
                if(!st.empty() and st.top()=='[')
                st.pop();
                else return false;
            }
            else if(s[i]=='}'){
               if(!st.empty() and st.top()=='{')
                st.pop();
                else return false;
            }  
        }
        if(st.size()==0) return true;
        else return false;
    }
};