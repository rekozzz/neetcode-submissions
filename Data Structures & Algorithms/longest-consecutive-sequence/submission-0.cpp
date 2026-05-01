    class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> s;

        for (int num :nums){
            s.insert(num);

        }
        int count = 0;
        for (int num: nums){
           
            if (s.find(num - 1) == s.end()){
                 int a = num;
                 int len = 1;
                while(s.find(a + 1) != s.end() ){
                    a++;
                    len++;
                }
                count = max(count,len);
            }
        }
        return count;
    }
};