class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0;
        unordered_map <char,int> mp1;
        unordered_map <char,int> mp2;
        

        for(int i = 0; i < t.size(); i++){
            mp2[t[i]]++;
        }
        int have = 0;
        int need = mp2.size();
        int start = 0;
        int minWin = INT_MAX;

        for(int r = 0; r < s.size(); r++){
            mp1[s[r]]++;
            if(mp2.count(s[r]) && mp1[s[r]] == mp2[s[r]]){
                have++;
            }
            while(have == need){
                if(r - l + 1 <minWin){
                    minWin = r - l + 1;
                     start = l;
                }
                
                mp1[s[l]]--;
            if(mp2.count(s[l]) && mp1[s[l]] < mp2[s[l]]){
               
                have--;
            }
             l++;
            }
            
        }
      return minWin == INT_MAX ? "" : s.substr(start, minWin);
    }
    
};