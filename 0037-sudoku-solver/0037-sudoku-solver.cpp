class Solution {
public:
    bool isValid(vector<vector<char>>& board,int row,int col,char d){
        for(int i=0;i<9;i++){
            if(board[i][col]==d){       //check column
                return false;
            }
            if(board[row][i]==d){    //check row    
                return false;  
            }
        }

        int st_i=row/3*3;
        int st_j=col/3*3;

        for(int k=0;k<3;k++){
            for(int l=0;l<3;l++){
                if(board[st_i+k][st_j+l]==d)
                    return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char d='1';d<='9';d++){
                        if(isValid(board,i,j,d)){
                            board[i][j]=d; //do
                            if(solve(board)==true){
                                return true;//explore
                            }
                            board[i][j]='.';//undo
                        }
                    }
                    return false;
                }
            }
            
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};