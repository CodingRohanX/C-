#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,f=1,i=1;
        cin>>n>>k;
        while(f!=n){
            f++;
            i=i+k;
        }
        cout<<i<<endl;
    }
}