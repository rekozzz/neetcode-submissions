    class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
         int l = 0;
         int maxLen = 0;
         unordered_map<int, char> mp;

         for(int r = 0; r < s.size(); r++){
            mp[s[r]]++;
            
            while(mp[s[r]] > 1){
                mp[s[l]]--;
                l++;
            }
            maxLen = max(maxLen, r - l + 1);
         }
         return maxLen;
        }
    };
