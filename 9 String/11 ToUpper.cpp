#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "abcdefghijk";

    // converting Lower to Upper

    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
    }
    cout<<str<<endl;

    //ABCDEFGHIJK


    //OR

    
    transform(str.begin(),str.end(),str.begin(), ::toupper);
    //ABCDEFGHIJK


    // OR


    string str = "hello";
    for (int i = 0; i < str.length(); i++){
        str[i] = toupper(str[i]);
    }
    cout<<str;
}