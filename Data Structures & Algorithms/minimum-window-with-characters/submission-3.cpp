
class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0;
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for (int i = 0; i < t.size(); i++) {
            mp2[t[i]]++;
        }

        int minWin = INT_MAX;
        int have = 0;
        int need = mp2.size();
        int start = 0;

        for (int r = 0; r < s.size(); r++) {
            mp1[s[r]]++;

            if (mp2.count(s[r]) && mp1[s[r]] == mp2[s[r]]) {
                have++;
            }

            while (have == need) {
                if (r - l + 1 < minWin) {
                    start = l;
                    minWin = r - l + 1;
                }

                mp1[s[l]]--;

                if (mp2.count(s[l]) && mp1[s[l]] < mp2[s[l]]) {
                    have--;
                }

                l++;
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
