#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a.begin(),a.end());
    //cout<<" ";
    for(int i=0;i<n;i++){
        if(i!=n-1){
            cout<<a[i]<<"s";
        }
        else{
            cout<<a[i];
        }
    }
}