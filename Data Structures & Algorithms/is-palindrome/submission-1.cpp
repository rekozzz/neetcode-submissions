class Solution {
public:
    bool isPalindrome(string s) {
        string x = "";
        for (char c : s) {
            if (isalnum(c)) x += tolower(c);
        }
        for (int i = 0; i < x.size() / 2 ; i++){
            if(x[i] != x[x.size()- i - 1]){
                return false;
            }
        }
        return true;
    }
};