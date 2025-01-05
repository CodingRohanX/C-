#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int temp=a;
    a=b;
    b=temp;
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    a=a*b;
    b=a/b;
    a=a/b;

    a=a|b;
    b=a^b;
    a=a^b;
    

    cout<<"a="<<a<<" b="<<b<<endl;

    a=3;
    a++;
    cout<<a;   //4

    a=3;
    ++a;
    cout<<a;    //4

    a=3;
    b=a++;
    cout<<b;    //3

    a=3;
    b=++a;
    cout<<b;    //4

    int a=6;
    int b=++a + ++a;
    cout<<b;            //16

    int a=6;
    int b=++a + ++a + ++a;
    cout<<b;           //25
}