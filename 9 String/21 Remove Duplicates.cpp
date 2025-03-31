#include <bits/stdc++.h>
using namespace std;

string minimumLength(string s) {
    int p1=0,p2=p1+1;
    while(p1<s.size()){
        while(p2<s.size()){
            if(s[p1]==s[p2]){
                s.erase(p2,1);
            }
            else{
                p2++;
            }
        }
        p1++;
        p2=p1+1;
    }
    return s;
}

int main() {
    string s="aabbccdd";
    string s1="aaaaaaabbcgwuunjbcc";
    cout<<minimumLength(s)<<endl;
    cout<<minimumLength(s1)<<endl;
}

/*
abcd
abcgwunj
*/