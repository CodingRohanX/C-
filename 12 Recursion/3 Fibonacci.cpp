#include<iostream>
using namespace std;

int Fib(int n){

    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }

    int Fib1=Fib(n-1)+Fib(n-2);
    return Fib1;
}

int main(){
    int n;
    cin>>n;
    cout<<Fib(n);
}

/*
5
5
*/