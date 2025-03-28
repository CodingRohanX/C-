#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag1=0,flag2=0,flag3=0,flag4=1;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(flag1==1 && (s[i]=='M' || s[i]=='m')){
                //cout<<"aaya flag1"<<endl;
                flag1=0;
                break;
            }
            else if(flag2==1 && (s[i]=='E' || s[i]=='e')){
                //cout<<"aaya flag2"<<endl;
                flag2=0;
                break;
            }
            else if(flag3==1 && (s[i]=='O' || s[i]=='o')){
                //cout<<"aaya flag3"<<endl;
                flag3=0;
                break;
            }


            if((s[i]=='M' || s[i]=='m') && (s[i+1]=='E' || s[i+1]=='e')){
                flag1=1;
            }
            else if((s[i]=='E' || s[i]=='e') && (s[i+1]=='O' || s[i+1]=='o')){
                flag2=1;
            }
            else if((s[i]=='O' || s[i]=='o') && (s[i+1]=='W' || s[i+1]=='w')){
                flag3=1;
            }

            if(s[i]=='M' || s[i]=='E' || s[i]=='O' || s[i]=='W' || s[i]=='m' || s[i]=='e' || s[i]=='o' || s[i]=='w'){
                continue;
            }
            else{
                flag4=0;
                break;
            }

            
        }
        //cout<<flag4<<endl;
        if(flag1==1 && flag2==1 && flag3==1 && flag4==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

//MEOW