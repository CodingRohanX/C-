#include<bits/stdc++.h>
using namespace std;

char decide(vector<vector<int>>& m,int i,int j){
    if(i+1<m.size() && m[i+1][j]!=-200){
        return 'd';
    }
    else if(i-1>=0 && m[i-1][j]!=-200){
        return 'u';
    }
    else if(j+1<m[0].size() && m[i][j+1]!=-200){
        return 'r';
    }
    else if(j-1>=0 && m[i][j-1]!=-200){
        return 'l';
    }
    else{
        return '0';
    }
}

vector<int> spiralOrder(vector<vector<int>>& m) {
    vector<int> v;
    char dir='r';
    int i=0,j=0;
    while(1){
        while(dir=='d' && i+1<m.size() && m[i+1][j]!=-200){
            v.push_back(m[i][j]);
            m[i][j]=-200;
            i++;
        }
        while(dir=='r' && j+1<m[0].size() && m[i][j+1]!=-200){
            v.push_back(m[i][j]);
            m[i][j]=-200;
            j++;
        }
        while(dir=='u' && i-1>=0 && m[i-1][j]!=-200){
            v.push_back(m[i][j]);
            m[i][j]=-200;
            i--;
        }
        while(dir=='l' && j-1>=0 && m[i][j-1]!=-200){
            v.push_back(m[i][j]);
            m[i][j]=-200;
            j--;
        }
        dir=decide(m,i,j);
        if(dir=='0'){
            v.push_back(m[i][j]);
            return v;
        }
    }
    return v;
}

int main(){
    vector<vector<int>> grid = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> result=spiralOrder(grid);
    for(auto i: result){
        cout<<i<<" ";
    }
}
