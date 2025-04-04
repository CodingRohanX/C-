#include<iostream>
using namespace std;


int gcd(int m,int n){
    while(n!=0){
        int rem=m%n;
        m=n;
        n=rem;
    }
    return m;
}

int main(){
    cout<<gcd(42,24)<<endl;
}


/*
6
*/




/*      Rough Work
        m=42 & n=24
        42%24=18
        24%18=6
        18%6=0
*/