#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);


    // Take an array
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    //Print Vector 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    // 1 2 3

    for(auto i : v) cout<<i<<" ";


    //Print Vector 2 (Pointer method)
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
    // 1 2 3


    //Print Vector 3
    for(auto element:v){
        cout<<element<<" ";
    }cout<<endl;
    // 1 2 3


    v.pop_back();               //deleting
    for(auto element:v){
        cout<<element<<" ";
    }cout<<endl;
    //1 2


    vector<int> v2 (3,50);      //new vector v2

    for(auto element:v2){
        cout<<element<<" ";
    }cout<<endl;
    //50 50 50


    swap(v,v2);
    
    for(auto element:v){
        cout<<element<<" ";
    }cout<<endl;
    for(auto element:v2){
        cout<<element<<" ";
    }cout<<endl;
    /*
    50 50 50        ( ELements in vector v & v2 got swapped)
    1 2
    */

    sort(v.begin(),v.end());    //#include <algorithm>
}

/*
1 2 3 
1 2 3
1 2 3
1 2
50 50 50
50 50 50
1 2
*/