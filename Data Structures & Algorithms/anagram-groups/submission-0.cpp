class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map <string, vector<string>> mp;
        for(int i = 0; i< strs.size(); i++){
            string word = strs[i];
            string key = word;  

            sort(key.begin(), key.end());
            mp[key].push_back(word);
           
        }

        vector<vector<string>> result;
        for (auto p : mp){
            result.push_back(p.second);
        }
        return result;
    }
};
