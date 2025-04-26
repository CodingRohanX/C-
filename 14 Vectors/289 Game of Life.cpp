#include<bits/stdc++.h>
using namespace std;

void lr(vector<vector<int>>& b,int i,int j,int &c){
    if(j-1>=0){
        c+=b[i][j-1];
    }
    if(j+1<b[0].size()){
        c+=b[i][j+1];
    }
}

void no(vector<vector<int>>& b,int i,int j,int &c){
    if(i-1>=0){
        c+=b[i-1][j];
        lr(b,i-1,j,c);
    }
    if(i+1<b.size()){
        c+=b[i+1][j];
        lr(b,i+1,j,c);
    }
    lr(b,i,j,c);
}

void change(vector<vector<int>>& b,int i,int j,int &c){
    if(c<2) b[i][j]=0;
    else if(c==2 && b[i][j]==1) b[i][j]=1;
    else if(c==3) b[i][j]=1;
    else if(c>3) b[i][j]=0;
    c=0;
}

void gameOfLife(vector<vector<int>>& b) {
    vector<vector<int>> ans=b;
    int c=0;
    for(int i=0;i<b.size();i++){
        for(int j=0;j<b[0].size();j++){
            no(b,i,j,c);
            change(ans,i,j,c);
        }
    }
    b=ans;
}

int main(){
    vector<vector<int>> grid = {{0,1,0},{0,0,1},{1,1,1},{0,0,0}};
    gameOfLife(grid);
        for(auto i: grid){
        for(auto j: i){
            cout<<j<<" ";
        }cout<<endl;
    }
}