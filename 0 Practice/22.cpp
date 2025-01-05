#include<iostream>

using namespace std;

int sum1(int a,int n,int d){
    int s=(n/2)*(2*a+(n-1)*d);
    return s;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a1,a2,a3,d1,d2,d3,n1,n2,n3;
        cin>>n;
        n=n-1;
        if(n<3){
            a1=a2=a3=0;
        }
        if(n<5){
            a1=3;
            a2=a3=0;
        }
        if(n<15){
            a1=3;
            a2=5;
            a3=0;
        }
        else{
            a1=3;
            a2=5;
            a3=0;
        }
        d1=3;d2=5;d3=15;
        n1=n/3;
        n2=n/5;
        n3=n/15;

        cout<<sum1(a1,n1,d1)<<endl;
    }
}

/*
11
31
100
99
101
45
*/