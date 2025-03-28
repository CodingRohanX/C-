#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,num,flag=0;
        cin>>n>>k;
        string s;
        cin>>s;
        long int x = stol(s);
        //long int n1 = stol(s1);
        vector<int> a(n);
        for(int i=n-1;i>=0;i--){
            num=x%10;
            a[i]=num;
            x=x/10;
        }
        if(k==0){
            a.insert(a.begin() + n, 0);
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]>k){
                    continue;
                }
                else{
                    //a[i]=k;
                    a.insert(a.begin() + i, k);
                    break;
                }
            }
        }
        for(int i=0;i<a.size();i++){
            cout<<a[i];
        }cout<<endl;
    }
}