#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s){
    int p2=s.size()-1;
    int p1=0;
    while(p1<=p2){
        if(s[p1]!=s[p2]){
            return 0;
        }
        else{
            p1++;
            p2--;
        }
    }
    return 1;
}

int main(){
    string s="aabbaa";
    cout<<checkPalindrome(s);
}

/*
1
*/