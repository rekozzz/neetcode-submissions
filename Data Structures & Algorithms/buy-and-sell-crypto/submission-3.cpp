class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int max = 0;
        
    
        for (int i = 0; i <= prices.size() - 1; i++){
            if(min > prices[i]){
                min = prices[i];
            }
            int maxCalc = prices[i] - min;
            if(maxCalc > max){
                max = maxCalc;
            }
        }
        return max;
    }
};
