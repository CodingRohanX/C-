#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=10;
    string s=to_string(x);
    cout<<s;
}

/*
10
*/

// Int to String 

int main(){
    int a = 123;
    string ans="";
    while(a>0){
        int d = a%10;
        ans+=(d+'0');
        a/=10;
    }
    reverse(ans.begin(), ans.end());
    cout<<ans;
}

/* 123 */