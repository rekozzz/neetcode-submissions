class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int maxPile = 0;
        for(int p : piles){
            maxPile = max(maxPile, p);
        }

        int left = 1;
        int right =  maxPile;
        
        while(left <= right){
            int mid = (left + right) / 2;
            long hours = 0;

                 for(int p : piles){
                hours += (p + mid - 1) / mid;
                 }

             if(hours > h){
                 left = mid + 1;
         }
                else{
        right = mid - 1;
         }
    }   
        return left;
        }
        
    
    
};
