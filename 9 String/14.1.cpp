#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,s1;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++){
        cin>>s1;
        s=s+s1;
    }
    cout<<s<<endl;
}

/*
Rohan

R
a
v
i
!

RohanRavi!
*/