
class Solution {
public:
    string minWindow(string s, string t) {
    int left = 0;
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for (int i = 0; i < t.size(); i++) {
            mp2[t[i]]++;
        }
        int have = 0;
        int minWin = INT_MAX;
        int need = mp2.size();
        int start = 0;

        for(int right = 0; right < s.size(); right++){
            mp1[s[right]]++;

            if(mp2.count(s[right]) && mp1[s[right]] == mp2[s[right]]){
                have++;
            }

            while(have == need){
                if(right - left + 1 < minWin){
                    start = left;
                    minWin = right - left + 1;
                }
                mp1[s[left]]--;

                if(mp2.count(s[left]) && mp1[s[left]] < mp2[s[left]]){
                have--;
            }
                left++;
        }

        }
        if (minWin == INT_MAX) {
            return "";
        }
        else {
            return s.substr(start, minWin);
        }
    }
};
