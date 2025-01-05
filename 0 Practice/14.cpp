#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
        int n,k,flag=0;
        cin>>n>>k;
        int a[n],rem[n];
        for(int i=0;i<n;i++){
            cin>>a[n];
        }
        for(int i=0;i<n;i++){
            if(a[i]>=k){
                rem[i]=(a[i]%k);
            }
        }
        sort(rem, rem + n);
        cout<<rem[0]<<endl;
        /* for(int i=0;i<n;i++){
            cout<<rem[i]<<" ";
        }cout<<"\n\n"<<endl; */
    }
}