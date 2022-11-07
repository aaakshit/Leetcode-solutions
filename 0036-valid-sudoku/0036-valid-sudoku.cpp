class Solution {
public:
    int findSquare(int i,int j){
        return ((i/3)*3)+(j/3);
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>>horizontal(9);
        vector<set<int>>vertical(9);
        vector<set<int>>square(9);
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')
                    continue;
                if(horizontal[i].find(board[i][j]-'0')!=horizontal[i].end()){
                    return false;
                }
                if(vertical[j].find(board[i][j]-'0')!=vertical[j].end()){
                    return false;
                }
                int sq = findSquare(i,j);
                if(square[sq].find(board[i][j]-'0')!=square[sq].end()){
                    return false;
                }
                horizontal[i].insert(board[i][j]-'0');
                vertical[j].insert(board[i][j]-'0');
                square[sq].insert(board[i][j]-'0');
            }
        }
        return true;
    }
};