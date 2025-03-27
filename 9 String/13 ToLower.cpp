#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s="ABc";
    for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
    cout<<s<<endl;
}
//abc