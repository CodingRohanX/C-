#include<iostream>
using namespace std;

int main(){
    int arr[5],i,max,min;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    //cout<<arr[0]<<endl;
    max=arr[0];
    min=arr[0];
    for(i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Max= "<<max<<"\n"<<"Min= "<<min<<endl;
}

/*
16 94 31 61 49
Max= 94
Min= 16
*/