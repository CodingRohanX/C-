#include<iostream>
#include<queue>
#include<vector>
#include <algorithm>
using namespace std;

void max(vector<int> v,int ptr,int k,int n){
    vector<int> v1;
    for(int i=ptr;i<ptr+k;i++){
        v1.push_back(v[i]);
    }

    auto max_iter = max_element(v1.begin(), v1.end());

    if (max_iter != v1.end()) {
        cout << *max_iter << " ";
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }cout<<endl;

    for(int ptr=0;ptr<n-k+1;ptr++){
        max(v,ptr,k,n);
    }
}

/*
8 3
1 3 -1 -3 5 3 6 7
3 3 5 5 6 7

6 2
3 4 9 1 -4 10
4 9 9 1 10
*/