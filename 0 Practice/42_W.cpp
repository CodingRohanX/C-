#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(flag==1){
                break;
            }
            for(int j=i+1;j<n;j++){
                if((a[i]+a[j])==2000 && flag==0){
                    cout<<"Accepted"<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            cout<<"Rejected"<<endl;
        }
    }
}