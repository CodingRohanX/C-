#include<iostream>
using namespace std;

int main(){
    int n,ch=64,m=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<((2*i)-1);j++){
            if(m<i){
                ch++;
                m++;
                cout<<char(ch)<<" ";
            }
            else{
                ch--;
                cout<<char(ch)<<" ";
            }
        }cout<<endl;
        ch=64;
        m=0;
    }
}