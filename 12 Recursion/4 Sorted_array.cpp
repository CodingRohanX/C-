#include<iostream>
using namespace std;

int j=0;

int sort(int arr[]){
    if(j==4){
        return 1;
    }
    else if(arr[j]<arr[j+1]){
        j++;
        return sort(arr);
    }
    else if(arr[j]>arr[j+1]){
        return 0;
    }
}

int main(){
    int array[5],i;
    for(i=0;i<5;i++){
        cin>>array[i];
    }
    if(sort(array)==1){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Unsorted"<<endl;
    }
}

/*
1 2 3 4 5
Sorted
*/