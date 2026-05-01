class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        
        for (int i = 0; i < nums.size(); i++){
            
            mp[nums[i]]++;
            
        }
        vector<vector<int>> b(nums.size() + 1);

        for (auto const & [num,freq]: mp){
              b[freq].push_back(num);

        }
        vector<int> res;
        for(int i = nums.size(); i >= 0; i--){
            for (int num: b[i]){
                res.push_back(num);
            }
            if(res.size() == k){
                break;
            }
        }
        return res;
    }
};

