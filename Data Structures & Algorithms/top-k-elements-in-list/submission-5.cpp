class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<vector<int>> bucket(nums.size() + 1);

       for(int x: nums){
        freq[x]++;
       }

        for(auto p: freq){
            bucket[p.second].push_back(p.first);
        }
        vector <int> res;
        for(int i = bucket.size() - 1; i >= 0; i--){
            for(auto x: bucket[i]){
                res.push_back(x);

                if(res.size() == k)
                return res;
            }
        }
        return {};
    }
};

