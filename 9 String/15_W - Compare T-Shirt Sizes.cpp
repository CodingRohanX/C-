#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int l1=s1.length(),l2=s2.length();
        if(s1.compare(s2)==0){
            cout<<"="<<endl;
        }
        else{
            if(s1[l1-1]=='S' && s2[l2-1]=='M'){
                cout<<'<'<<endl;
            }
            else if(s1[l1-1]=='M' && s2[l2-1]=='S'){
                cout<<'>'<<endl;
            }
            else if(s1[l1-1]=='S' && s2[l2-1]=='L'){
                cout<<'<'<<endl;
            }
            else if(s1[l1-1]=='L' && s2[l2-1]=='S'){
                cout<<'>'<<endl;
            }
            else if(s1[l1-1]=='S' && s2[l2-1]=='S'){
                if(l1>l2){
                    cout<<'<'<<endl;
                }
                else{
                    cout<<'>'<<endl;
                }
            }


            else if(s1[l1-1]=='L' && s2[l2-1]=='M'){
                cout<<'>'<<endl;
            }
            else if(s1[l1-1]=='M' && s2[l2-1]=='L'){
                cout<<'<'<<endl;
            }
            else if(s1[l1-1]=='M' && s2[l2-1]=='M'){
                if(l1>l2){
                    cout<<'>'<<endl;
                }
                else{
                    cout<<'<'<<endl;
                }
            }


            else if(s1[l1-1]=='L' && s2[l2-1]=='L'){
                if(l1>l2){
                    cout<<'>'<<endl;
                }
                else{
                    cout<<'<'<<endl;
                }
            }
        }
    }
}