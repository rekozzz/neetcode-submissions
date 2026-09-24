class Solution {
public:
    int trap(vector<int>& height) {
    int r = height.size() - 1;
    int l = 0;
    int leftMax = 0;
    int rightMax = 0;
    int trap = 0;

        while (l < r){
            if (height[l] < height[r]){
             if(height[l] >= leftMax){
                leftMax = height[l];
            }
            else{
                trap += leftMax - height[l];
            }
            l++;
            }
            else{
                if(height[r] >= rightMax){
                    rightMax = height[r];
                }
                else{
                    trap += rightMax - height[r];
                }
                r--;
            }
        }
        return trap;
    }
};