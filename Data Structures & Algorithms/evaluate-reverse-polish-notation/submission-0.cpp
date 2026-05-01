class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;

        for(int i = 0; i < tokens.size(); i++){
            try{
                 int num = stoi(tokens[i]);
                st.push(num);
            }
            catch (...){
                    int result;
                    int right = st.top();
                    st.pop();
                    int left = st.top();
                    st.pop();
                    if (tokens[i] == "+") {
                        result = left + right;
                    }
                else if (tokens[i] == "-") { 
                    result = left - right;
                }
                else if (tokens[i] == "*") { 
                    result = left * right;
                }
                else if (tokens[i] == "/") {
                    result = left / right;
                }
                st.push(result);
            }
           
        }
        return st.top();
    }
};
