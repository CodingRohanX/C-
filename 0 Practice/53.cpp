#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> kLargest(int arr[], int n, int k){
    vector<int> arr1(n);
    vector<int> ans(k);
    for(int i=0;i<n;i++){
        arr1.push_back(arr[i]);
    }
    sort(arr1.begin(),arr1.end());
    while(k>0){
        ans.push_back(arr1[n-1]);
        n--;
        k--;
    }
    return ans;
}

int main(){
    int n = 5,k = 2;
    vector<int> ans;
    int arr[] = {12, 5, 787, 1, 23};
    ans = kLargest(arr,n,k);
    for(int i=0;i<k;i++){
        cout<<ans[i]<<" ";
    }
}