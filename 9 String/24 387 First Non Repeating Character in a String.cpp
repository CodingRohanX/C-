#include<bits/stdc++.h>
using namespace std;

char nonRepeatingChar(string &s) {
    map<char,int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    for(int i=0;i<s.size();i++){
        if(m[s[i]]==1){
            return s[i];
        }
    }
    return -1;
}

int main(){
    string s = "abca";
    cout<<nonRepeatingChar(s)<<endl;
}

/*
b
*/