#include<iostream>
#include<algorithm>
#define ll long long int 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,i;
        ll sum=0;
        cin>>n;
        if(n<3){
            cout<<0<<endl;
        }
        else{
            for(i=0;i<n;i++){
                if(i%3==0){
                    sum+=i;
                }
                else if(i%5==0){
                    sum+=i;
                }
            }
        cout<<sum<<endl;
        }
    }
}
