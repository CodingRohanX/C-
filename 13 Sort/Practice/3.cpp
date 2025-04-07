#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m,flag1=0,flag2=0;
    cin>>n;
    vector<int> a(n);
    vector<int> b(m);
    //vector<int> final;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    if(n>m){
        vector<int> final(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(b[i]==a[j]){
                    flag1=1;
                    a.erase(a.begin() + j);
                    break;
                }
            }if(flag1==0){
                final.push_back(b[i]);
            }
            else{
                flag1=0;
            }
        }
        cout<<final.size()<<endl;
        for(int j=0;j<final.size();j++){
            cout<<final[j]<<" ";
        }
    }
    else{
        vector<int> final(m);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(b[i]==a[j]){
                    flag1=1;
                    a.erase(a.begin() + j);
                    break;
                }
            }if(flag1==0){
                final.push_back(b[i]);
            }
            else{
                flag1=0;
            }
        }
        cout<<final.size()<<endl;
        for(int j=0;j<final.size();j++){
            cout<<final[j]<<" ";
        }
    }
    /* cout<<final.size()<<endl;
    size_t size = final.size();
    cout<<size<<endl; 
    for(int j=0;j<final.size();j++){
        cout<<final[j]<<" ";
    }*/
    
}