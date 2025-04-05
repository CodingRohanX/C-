#include<iostream>
using namespace std;

int fact(int n){

    if(n==1){
        return 1;
    }

    int fact1=n*fact(n-1);
    return fact1;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}

/*
5
120
*/