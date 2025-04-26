#include<bits/stdc++.h>
using namespace std;

void printSubarray(vector<int> v){
    for(int st=0;st<v.size();st++){
        for(int end=st;end<v.size();end++){
            for(int i=st;i<=end;i++){
                cout<<v[i]<<" ";
            }cout<<endl;
        }
    }
}

int main(){
    vector<int> v={1,2,3,4,5};
    printSubarray(v);
    /*
    1 
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5 
    2 
    2 3
    2 3 4
    2 3 4 5
    3
    3 4
    3 4 5
    4
    4 5
    5
    */
}