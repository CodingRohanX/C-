#include<bits/stdc++.h>
using namespace std;

void call(vector<vector<int>>& g,int i,int j,int &c){
    if(i+1<g.size() && g[i+1][j]==1){
        if(g[i][j]==1) c++;
        g[i][j]=0;
        call(g,i+1,j,c);
    }
    if(i-1>=0 && g[i-1][j]==1){
        if(g[i][j]==1) c++;
        g[i][j]=0;
        call(g,i-1,j,c);
    }
    if(j+1<g[0].size() && g[i][j+1]==1){
        if(g[i][j]==1) c++;
        g[i][j]=0;
        call(g,i,j+1,c);
    }
    if(j-1>=0 && g[i][j-1]==1){
        if(g[i][j]==1) c++;
        g[i][j]=0;
        call(g,i,j-1,c);
    }
    if(g[i][j]==1) {
        g[i][j]=0;
        c++;
        return;
    }
}

int maxAreaOfIsland(vector<vector<int>>& g) {
    int c=0;
    int ans=0;
    for(int i=0;i<g.size();i++){
        for(int j=0;j<g[0].size();j++){
            if(g[i][j]==1){
                c=0;
                call(g,i,j,c);
                ans=max(ans,c);
            }
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> grid = {{0,0,1,0,0,0,0,1,0,0,0,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},{0,1,1,0,1,0,0,0,0,0,0,0,0},{0,1,0,0,1,1,0,0,1,0,1,0,0},{0,1,0,0,1,1,0,0,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},{0,0,0,0,0,0,0,1,1,0,0,0,0}};
    cout<<maxAreaOfIsland(grid);
}