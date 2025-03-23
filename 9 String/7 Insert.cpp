#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="Hi My name is Rohan";
    s1.insert(2,"!");
    cout<<s1;
}

/*
Hi! My name is Rohan        //Inserted '!'
*/

int main(){
    string s1="Hi My name is Rohan";
    string s="10";
    s1.insert(2,s);
    cout<<s1;
}
/*
Hi10 My name is Rohan
*/