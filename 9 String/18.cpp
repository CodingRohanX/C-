#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<char> v={str[0]};
        for(int i=1;i<n;i++){
            if(tolower(str[i])==tolower(str[i-1])){
                continue;
            }
            else{
                v.push_back((tolower(str[i])));
            }
        }
        //cout<<v.size()<<endl;
        if(v.size()==4){
            if((str[0]=='M' || str[0]=='m') && (str[1]=='E' || str[1]=='e') && (str[2]=='O' || str[2]=='o') && (str[3]=='W' || str[3]=='w')){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}