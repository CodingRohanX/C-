#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPresent(int elem,vector<int> b){
    for(int i=0;i<b.size();i++){
        if(elem==b[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b={};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        if(isPresent(a[i],b)){
            continue;
        }
        else{
            b.push_back(a[i]);
        }
    }
    cout<<b.size()<<endl;
}