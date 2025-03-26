#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "786";
    int x = stoi(s1);
    cout<<(x+2)<<endl;
}

/*
788
*/



// String to Int 

int main(){
    string s = "123";
    int n1=0;
    for(int i=0;i<s.size();i++){
        n1 = n1 * 10 + (s[i] - '0');
    }
    cout<<n1;
}

// 123