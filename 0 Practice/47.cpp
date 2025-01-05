#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int small=97,big=65,flag=0,flagfinal=0;;
    int len= s.length();
    for(int j=0;j<26;j++){
        flag=0;
        for(int i=0;i<len;i++){
            if(s[i]==char(big) || s[i]==char(small)){
                flag=1;
            }
            big++;
            small++;
            if(flag==0){
                cout<<"not pangram"<<endl;
                flagfinal=1;
                break;
            }
        }        
    }
    if(flagfinal==0){
        cout<<"pangram"<<endl;
    }
}