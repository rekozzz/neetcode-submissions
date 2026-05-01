class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9); 
        vector<unordered_set<char>> col(9); 
        vector<unordered_set<char>> box(9); 

        for(int i = 0; i < board.size(); i ++) {
            for(int j = 0; j < board.size(); j++){
                if(board[i][j] == '.'){
                    continue;
                }

            int box1 = (i / 3) * 3 + (j / 3);
                
                if (row[i].count(board[i][j])){
                    return false;
                }
                row[i].insert(board[i][j]);

                 if (col[j].count(board[i][j])){
                    return false;
                }
                col[j].insert(board[i][j]);

                  if(box[box1].count(board[i][j])){
                return false;
            }
            box[box1].insert(board[i][j]);
            }

          
        }
        return true;
    }
    
};
