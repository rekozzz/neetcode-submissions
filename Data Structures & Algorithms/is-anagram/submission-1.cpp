class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for(char c: s){
            mp1[c]++;
        }

        for(char c: t){
            mp2[c]++;
        }

        for(auto p: mp1){
            if(mp2.find(p.first) == mp2.end() || mp2[p.first] != p.second)
            return false;
        }
        return true;
    }
};
