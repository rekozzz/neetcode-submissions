class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minimum = prices[0];
       int maximum = 0;

       for(int price: prices){
        minimum = min(price, minimum);
        int calculate = price - minimum;
        maximum = max(calculate, maximum);
       }
       return maximum;
    }
};
