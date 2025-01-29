#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr, arr + n);

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

/*
5
1 2 9 5 7
1 2 5 7 9
*/