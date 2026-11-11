class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maximum = 0;
       int minimum = prices[0];

       for(int i = 0; i < prices.size(); i++){
        minimum = min(minimum, prices[i]);
        int calc = prices[i] - minimum;
        maximum = max(maximum, calc);
       }  
       return maximum;
    }
};
