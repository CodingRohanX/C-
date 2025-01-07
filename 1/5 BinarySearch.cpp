#include<bits/stdc++.h>
using namespace std;

// checking element is Present or not
bool binarySearch(vector<int> v,int t){
    int l=0,h=v.size()-1;
    int m=(l+h)/2;
    while(l<=h){
        if(v[m]<t){
            l=m+1;
            m=(l+h)/2;
        }
        else if(v[m]>t){
            h=m-1;
            m=(l+h)/2;
        }
        else if(v[m]==t) return 1;
    }
    return 0;
}

int main(){
    vector<int> v={1,2,3,4,5};
    cout<<binarySearch(v,5); //1
}