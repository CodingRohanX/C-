#include<bits/stdc++.h>
using namespace std;

int main() {
    int c=0,i=0;
    vector<int> arr={3,5,0,0,4};
    while(i<arr.size()){
        if(arr[i]==0){
            arr.erase(arr.begin()+i);
            c++;
        }
        else{
            i++;
        }
    }
    while(c>0){
        arr.insert(arr.begin()+arr.size()-1,0);
        c--;
    }
    for(auto i: arr){
        cout<<i<<" ";
    }
}