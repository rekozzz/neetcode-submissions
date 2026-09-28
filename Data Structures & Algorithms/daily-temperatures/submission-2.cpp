class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector <int> res (temperatures.size(),0);   

        for (int i = 0; i < temperatures.size(); i++){
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                int day = st.top();
                st.pop();
                res[day] = i - day;
            }
            st.push(i);
        }
        return res;
    }
   
};
