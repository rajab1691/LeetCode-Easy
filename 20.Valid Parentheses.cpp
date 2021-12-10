/*
    T.C-O(n)
    S.C-O(n)
*/
class Solution {
public:
    bool isValid(string s) {
        
        int n=s.length();
        stack<char>st;
        for(int i=0;i<n;i++){  
            //if stack is empty then push whatevr char is s[i]
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            //if char matches then pop from stack
            if(st.top()=='(' and s[i]==')'){
                st.pop();
            }else if(st.top()=='{' and s[i]=='}'){
                st.pop();
            }else if(st.top()=='[' and s[i]==']'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        //if stack becomes empty then return true else false
        return st.empty();
    }
};
