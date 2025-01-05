#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[3],num;
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        num=a[1]*a[2];
        if(a[0]>=num){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

/*
if(a[0]<a[1]){
            cout<<"FIRST"<<endl;
        }
        else if(a[0]==a[1]){
            cout<<"ANY"<<endl;
        }
        else{
            cout<<"SECOND"<<endl;
        }
*/