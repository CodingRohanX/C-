#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            if(i%3==0 || i%5==0){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
}