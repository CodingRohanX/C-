//#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){
    ll n;
    cin>>n;
    ll arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr, arr + n);

    /* for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<"\n"; */
    
    ll sum=0;
    for(int i=0;i<n-1;i++){
        sum=sum+(arr[i]*arr[i+1]);
    }

    cout<<sum<<endl;
}