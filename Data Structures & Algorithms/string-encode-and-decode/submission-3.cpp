class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded_string = "";

        for (int i = 0; i < strs.size(); i++) {
            encoded_string += to_string(strs[i].length()) + "#" + strs[i];
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> decoded_string;

        while(i != s.length()){
            string len = "";
            while(s[i] != '#'){
                len+= s[i];
                i++;
            }
            int length = stoi(len);
            i++;
           decoded_string.push_back(s.substr(i, length));
           i += length;
        }
        return decoded_string;
    }
};
