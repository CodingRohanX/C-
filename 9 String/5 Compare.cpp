#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="abc";
    string s2="xyz";

    cout<<s2.compare(s1)<<endl;     //1         ('xyz' is greater than 'abc')
    cout<<s1.compare(s2)<<endl;     //-1            ('abc' is less than 'xyz')

    string s1="abc";
    string s2="abc";
    cout<<s1.compare(s2)<<endl;     //0         (Strings are equal)
}