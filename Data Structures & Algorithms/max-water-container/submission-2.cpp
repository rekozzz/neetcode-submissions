class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0;
        int l = 0;
        int r = heights.size() - 1;

        while(l < r){
            int width = r - l;
            int height = min(heights[l], heights[r]);
            int currentArea = height * width;

            maxArea = max(maxArea, currentArea);

            if(heights[l] < heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxArea;
    }
};
