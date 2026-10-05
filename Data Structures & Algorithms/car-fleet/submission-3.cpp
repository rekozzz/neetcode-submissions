    class Solution {
    public:
        int carFleet(int target, vector<int>& position, vector<int>& speed) {
            stack <double> st;
            vector<pair<int,int>> cars;

            for(int i = 0; i < position.size(); i++) {
                cars.push_back({position[i], speed[i]});
            }
             sort(cars.rbegin(), cars.rend());

             for(int i = 0; i < position.size(); i++) {
                double t = (double) (target - cars[i].first) / cars[i].second;

                if(st.empty() || st.top() < t){
                    st.push(t);
                }
            }
            return st.size();
        }


    };
