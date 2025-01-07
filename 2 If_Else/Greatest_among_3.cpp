#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;       //taking 3 inputs
    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
}

/* 
8 9 10
10
*/