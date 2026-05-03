class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        unordered_map<char, int> mp;
        int maxFr = 0;
        int maxLen = 0;
        
        for (int r = 0; r < s.size(); r++){
            mp[s[r]]++;
            maxFr = max(maxFr, mp[s[r]]);
            while((r-l+1) - maxFr > k){
                mp[s[l]]--;
                l++;
            }
           maxLen = max(maxLen, r - l + 1);
           
        }
        return maxLen;
    }
};
