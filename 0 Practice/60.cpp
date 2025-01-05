#include<iostream>
#include<vector>
using namespace std;

void update(vector<vector<int>> &matrix, vector<vector<int>> &v,int col, int row, int i, int j){
    for (int k = col - 1; k > 0; k--){
        for (int l = 0; l < row; l++){
            v[k][l] = matrix[i][j];
        }
    }
}

    void rotate(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    vector<vector<int>> v(matrix.size(), vector<int>(matrix[0].size(),0));
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            update(matrix,v,col,row,i,j);
        }
    }

    for (int i = 0; i < matrix.size(); ++i)
    {
        for (int j = 0; j < matrix[i].size(); ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    
}