class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int r = numbers.size() - 1;
       int l = 0;
       vector<int> res; 
       while(l < r) {
        if (numbers[l] + numbers[r] < target){
            l++;
        }
        else if(numbers[l] + numbers[r] >  target){
            r--;
        }
        else{
            res ={l + 1, r + 1};
            break;
        }
       }
       return res;
    }
};
