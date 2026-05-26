class Solution {
public:
    int characterReplacement(string s, int k) {
       int l = 0;
       int maxLen = 0;
       unordered_map<char,int> mp;
       int maxFreq = 0;

       for (int r  = 0; r < s.size(); r++ ){
            mp[s[r]]++;
            maxFreq = max(maxFreq, mp[s[r]]);
            while((r - l + 1) - maxFreq > k){
                mp[s[l]]--;
                l++;
            }
            maxLen = max(maxLen, r - l + 1);
       }
       return maxLen;
    }
};
