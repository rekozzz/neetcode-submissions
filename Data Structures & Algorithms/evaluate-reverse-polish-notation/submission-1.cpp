class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        
        for (int i = 0; i < tokens.size(); i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int right = st.top();
                st.pop();
                int left = st.top();
                st.pop();
                int res = 0;
                if(tokens[i] == "+"){
                    res = left + right;
                }
                else if(tokens[i] == "-"){
                    res = left - right;
                }
                else if(tokens[i] == "*"){
                    res = left * right;
                }
                else if(tokens[i] == "/"){
                    res = left / right;
                }
                st.push(res);
            }

            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
