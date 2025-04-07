#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int Sn,i=1;
        cin>>Sn;
        while(Sn>0){
            Sn=Sn-i;
            i++;
            if(Sn==0){
                break;
            }
        }
        if(Sn==0){
            cout<<i-1<<endl;
        }
        else{
            cout<<i-2<<endl;
        }
    }
}