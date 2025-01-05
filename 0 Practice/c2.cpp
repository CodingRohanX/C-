#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
        int No=0;
        string str,str1="";
        getline(cin,str);
        for(int i=0;i<str.size();i++){
            /* if(No==i){
                continue;
            }
            else if(No!=i){
                str1[i]=str[i];
            } */
            str1[i]=str[i];
        }
        cout<<str1;
	}
}