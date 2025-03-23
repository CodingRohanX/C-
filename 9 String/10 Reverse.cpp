#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str="xyz";
    reverse(str.begin(),str.end());
    cout<<str;
}

// zyx