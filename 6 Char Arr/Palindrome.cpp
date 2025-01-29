#include<iostream>
using namespace std;

int main(){
    int n,i,flag;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    for(i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            flag=0;
            break;
        }
    }
    if(flag=0){
        cout<<"Not Palindrome\n";
    }
    else{
        cout<<"Palindrome\n";
    }
}