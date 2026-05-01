class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";
        for (char c : s) {
            if (isalnum(c)) a += tolower(c);
        }
        for (int i = 0; i < a.size() / 2 ; i++){
            if(a[i] != a[a.size()- i - 1]){
                return false;
            }
        }
        return true;
    }
};