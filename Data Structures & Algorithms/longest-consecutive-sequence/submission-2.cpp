class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;

        
        for (int num : nums) {
            s.insert(num);
        }

        int count = 0;

        
        for (int num : s) {
            if (s.find(num - 1) == s.end()) { 
                int a = num;
                int length = 1;

               
                while (s.find(a + 1) != s.end()) {
                    a++;
                    length++;
                }

               
                count = max(count, length);
            }
        }

        return count;
    }  //Reko
};