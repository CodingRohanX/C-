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
    reverse(arr, arr + n);

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

/*
5          
9 1 4 3 6   
9 6 4 3 1       //Sorted & Reversed
*/