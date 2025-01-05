#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        int st=n;
        while(n!=0){
            flag=0;
            for(int i=2;i<=n;i++){
                if(st%i!=0){
                    st++;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                cout<<st<<endl;
                break;
            }
        }
    }
}

//Smallest multiple