#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,k,ptr=0,flag=0,sum=0,max=0,flag1=0,i,j;
    cin>>n/*>>k*/;
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    i=0;
    while(i<a.size()){
        for(int j=i;j<a.size();j++){
            if(a[j]==1 && a[j+1]==1){
                flag1=1;
                if(flag==0){
                    sum=2;
                    flag=1;
                }
                else{
                    sum=sum+1;
                }
            }
            else if(flag1==1 && a[j]==1 && a[j+1]==0){
                break;
            }
        }
        if(max<sum){
            max=sum;
            cout<<"sum="<<sum<<" ";
        }cout<<endl;
        sum=0;
        i=j+2;
    }
    cout<<max<<endl;
}


/* 0 0 1 1 0 1 1 1 0 1 1 1 1 */