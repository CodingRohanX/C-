#include<iostream>
using namespace std;
#include<cmath>

void BintoDec(int Binary){
    int count=0,num,temp,dec=0;
    for(int i=0;Binary>0;i++){
        temp=Binary%10;
        dec=dec+temp*pow(2, i);
        Binary=Binary/10;
    }
    cout<<dec<<endl;
}

int main(){
    int Binary;
    cin>>Binary;
    BintoDec(Binary);
}

/*
10101
21
*/