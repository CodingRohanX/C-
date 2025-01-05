#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int flag=0;
        int len= s.length();
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(s[i]==s[j]){
                    flag=1;
                    cout<<s[i]<<endl;
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
        if(flag==0){
            cout<<"."<<endl;
        }
    }
}