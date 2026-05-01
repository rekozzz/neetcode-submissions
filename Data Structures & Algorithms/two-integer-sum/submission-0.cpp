class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp;
        int com;

        for (int i = 0; i < nums.size(); i++){
            com = target - nums[i];
            if(mp.find(com) != mp.end()){
               return {mp[com], i};
               
            }
             mp.insert({nums[i],i});
        }
        

    }

};
