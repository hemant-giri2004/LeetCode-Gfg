class Solution {
public:
    bool traverse(vector<vector<char>>&board,int sr,int er,int sc,int ec){
        set<char> st;
        for(int row=sr;row<=er;row++){
            for(int col=sc;col<=ec;col++){
                if(board[row][col]=='.')    continue;
                if(st.find(board[row][col])!=st.end())  return false;
                st.insert(board[row][col]);    
            }   
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        // //Step 1: validate rows.
        // for(int row=0;row<9;row++){
        //     set<char> st;
        //     for(int col=0;col<9;col++){
        //         if(board[row][col]=='.') continue;
        //         if(st.find(board[row][col])!=st.end())  return false;
        //         st.insert(board[row][col]);
        //     }
        // }
        // //step 2: validate cols.
        // for(int col=0;col<9;col++){
        //     set<char> st;
        //     for(int row=0;row<9;row++){
        //         if(board[row][col]=='.')    continue;
        //         if(st.find(board[row][col])!=st.end())  return false;
        //         st.insert(board[row][col]);    
        //     }
        // }
        // //step 3: validate box(3*3).
        // for(int sr=0;sr<9;sr+=3){
        //     int er=sr+2;
        //     for(int sc=0;sc<9;sc+=3){
        //         int ec=sc+2;
        //         if(traverse(board,sr,er,sc,ec)==false)  return false;
        //     }
        // }

        // return true;

        unordered_set<string> st;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')    continue;
                string row = string(1, board[i][j]) + "_row_" + to_string(i);
                string col = string(1, board[i][j]) + "_col_" + to_string(j);
                string box = string(1, board[i][j]) + "_box_" + to_string(i/3) + "_" + to_string(j/3);
                if(st.count(row) || st.count(col) || st.count(box)) return false;
                if(st.count(row) || st.count(col) || st.count(box)) return false;
                st.insert(row);
                st.insert(col);
                st.insert(box);
            }
        }
        return true;
    }
};