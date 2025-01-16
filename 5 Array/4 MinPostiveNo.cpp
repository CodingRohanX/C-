#include<iostream>
using namespace std;

int main(){
    int n,i,j,flag;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0;i<n;i++){
        flag=0;
        for(j=0;j<n;j++){
            if(i==arr[j]){
                flag=1;
            }
        }
        if(flag==0){
            cout<<i<<endl;
            break;
        }
    }
}

/*
6
0 -9 1 3 -4 5
2
*/