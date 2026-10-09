class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = 0;
        for(int p: piles){
            maxPile = max(maxPile, p);
        }

        int left = 1;
        int right = maxPile;

        while(left <= right){
            int mid = left + (right - left) / 2;
            int sum = 0;

            for(int p: piles){
                sum += (p + mid - 1) / mid;
            }

            if(sum <= h){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
            
        }
        return left;
    }
        
};
