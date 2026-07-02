class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int m = 1;
        vector <int> prefix;
         
        for(int i = 0; i < nums.size(); i++){
            m *= nums[i];

            prefix.push_back(m);
        }
        vector <int> suffix (nums.size());
        int m2 = 1;
        for (int i = nums.size() - 1; i >= 0; i--){
            m2 *= nums[i];
            suffix[i] = m2;
        }

         vector <int> result;
    int m3;
    for ( int i = 0; i < nums.size(); i++){
        if (i == 0){
            m3 = suffix[ i + 1];
        }
        else if(i == nums.size() - 1){
            m3 = prefix[i - 1];
        }
        else{
            m3 = prefix[i - 1] * suffix[ i + 1];
        }
        result.push_back(m3);

    }
    return result;
    }

   
    
};
