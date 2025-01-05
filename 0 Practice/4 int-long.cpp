#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,pass;
        cin>>n>>pass;
        long s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        sort(s,s+n);

        int No=n-pass;
        int ans=s[No]-1;
        cout<<ans<<endl;
    }

}
