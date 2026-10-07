    class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int rows = matrix.size();       
            int cols = matrix[0].size();
            int l = 0;
            int r = rows * cols - 1;

            while(l <= r)  {
                int mid = l + (r - l) / 2;
                int r1 = mid / cols;
                int c = mid % cols;

                if(matrix[r1][c] == target){
                    return true;
                }
                else if(matrix[r1][c] < target){
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
            return false;
          
        }
    };
