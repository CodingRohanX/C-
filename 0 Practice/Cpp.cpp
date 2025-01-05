#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,m,sum=0;
        int count=0;
        cin>>n>>m;
        long long p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        sort(p,p+n);
        reverse(p,p+n);
        for(int i=0;i<n;i++){
            if(sum>=m){
                break;
            }
            else{
                sum=sum+p[i];
                count++;
            }
        }
        if(sum>=m){
            cout<<count<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}
