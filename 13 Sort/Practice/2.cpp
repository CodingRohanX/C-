#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m,ptra=0,ptrb=0;
    cin>>n;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> final;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    /* sort(a.begin(),a.end());
    sort(b.begin(),b.end()); */

    if(n>m){
        //vector<int> final(n);
        for(int i=0;i<n;i++){
            if(a[ptra]==b[ptrb]){
                ptra++;
                ptrb++;
            }
            else{
                final.push_back(a[ptra]);
                ptra++;
            }
        }
        /* for(int i=0;i<final.size();i++){
            cout<<final[i]<<endl;
        } */
    }
    else{
        //vector<int> final(m);
        for(int i=0;i<m;i++){
            if(a[ptra]==b[ptrb]){
                ptra++;
                ptrb++;
            }
            else{
                final.push_back(b[ptrb]);
                ptrb++;
            }
        }
        /* for(int i=0;i<final.size();i++){
            cout<<final[i]<<endl;
        } */
    }
    for(int j=0;j<final.size();j++){
        cout<<final[j]<<" ";
    }
    
}