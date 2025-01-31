#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="Fam";
    string s2="ily";

    s1.append(s2);
    cout<<s1<<endl;     //Family

    s1=s1+s2;           //s1=s1+"ily";      both works! 
    cout<<s1<<endl;        //Family
    return 0;
}