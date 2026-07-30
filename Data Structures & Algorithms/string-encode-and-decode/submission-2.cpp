    class Solution {
    public:

       string encode(vector<string>& strs) {
            string encoded_string = "";
        for (int i = 0; i < strs.size(); i++){
            
            int length = strs[i].length();

            encoded_string += to_string(length) + "#" + strs[i];
        } 
        return encoded_string;       
    }   

        vector<string> decode(string s) {
            int i = 0;
            vector <string> strs;
        
        while(i != s.length()){
            string len = "";
            while (s[i] != '#'){
            len += s[i];
            i++;
        }
        int length = stoi(len);
        i++;
        string word = s.substr(i, length);
        strs.push_back(word);
        i += length;
        }
        
        return strs;
        
        }

    };
