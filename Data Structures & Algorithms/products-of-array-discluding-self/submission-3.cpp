class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int m = 1;
       vector<int> prefix;

       for (int i = 0; i < nums.size(); i++){
        m *= nums[i];
        prefix.push_back(m);
       }

        int m2 = 1;
       vector<int> suffix (nums.size());

       for(int i = nums.size() - 1; i >= 0; i--){
        m2 *= nums[i];
        suffix[i] = m2;
       }

        int m3 = 1;
       vector<int> res;

       for (int i = 0; i < nums.size(); i++){
        if(i == 0){
            m3 = suffix[i + 1];
        }
        
        else if (i == nums.size() - 1){
            m3 = prefix[i - 1];
        }

        else{

            m3 = prefix[i - 1] * suffix[i + 1];
        }

        res.push_back(m3);
       }

        return res;
    }

};
