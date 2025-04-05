#include<iostream>
using namespace std;

int sum(int n){

    if(n==0){
        return 0;
    }
    
    int sum1=n+sum(n-1);
    return sum1;
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}

/*
10
55
*/