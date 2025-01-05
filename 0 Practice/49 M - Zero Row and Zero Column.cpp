#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> Matrix1(vector<vector<int>>& matrix,int ai,int aj){
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(i==ai || j==aj){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}

int main(){
    int n,m,num,k=0;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int>(m,0));
    vector<int> arri(n*m);
    vector<int> arrj(n*m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((matrix[i][j])==0){
                arri[k]=i;
                arrj[k]=j;
                k++;
            }
        }
    }
    
    for(int l=0;l<k;l++){
        matrix=Matrix1(matrix,arri[l],arrj[l]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
}