#include<bits/stdc++.h>
using namespace std;

bool check(vector<vector<char>>& b,int i,int j){
    map<char,int> mp;
    for(int l=0;l<3;l++){
        for(int k=0;k<3;k++){
            if(b[i][j]=='.') j++;
            else{
                mp[b[i][j]]++;
                if(mp[b[i][j]]>1) return 0;
                j++;
            }
        }
        j-=3;
        i++;
    }
    return 1;
}

bool isValidSudoku(vector<vector<char>>& board) {
    map<char,int> m;
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board.size();j++){
            if(m[board[i][j]]==1 && board[i][j]!='.') return 0;
            else m[board[i][j]]++;
            if(i%3==0 && j%3==0){
                if(!check(board,i,j)) return 0;
            }
        }m.clear();
    }m.clear();
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board.size();j++){
            if(m[board[j][i]]==1 && board[j][i]!='.') return 0;
            else m[board[j][i]]++;
        }m.clear();
    }m.clear();
    return 1;
}

int main(){
    vector<vector<char>> grid = {{'.','.','.','.','5','.','.','1','.'},{'.','4','.','3','.','.','.','.','.'},{'.','.','.','.','.','3','.','.','1'},{'8','.','.','.','.','.','.','2','.'},{'.','.','2','.','7','.','.','.','.'},{'.','1','5','.','.','.','.','.','.'},{'.','.','.','.','.','2','.','.','.'},{'.','2','.','9','.','.','.','.','.'},{'.','.','4','.','.','.','.','.','.'}};
    cout<<isValidSudoku(grid);
}