class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int com;
        unordered_map<int,int> mp;

        for (int i = 0; i <= nums.size() - 1; i++){
            com = target - nums[i];
            if(mp.find(com) != mp.end()){
                return {mp[com], i};
            }
            mp.insert({nums[i],i});
        }
        return {};
    }

};
