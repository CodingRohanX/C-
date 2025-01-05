#include<iostream>
#include<string>
using namespace std;

int main(){
    int flag=0;
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]==87 && str[i+2]==87 && str[i+4]==87){
            cout<<"YES"<<endl;
            flag=1;
        }
    }
    if(flag==0){
        cout<<"NO\n";
    }
}