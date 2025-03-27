#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    //while(t--){
    for(int i=0;i<t;i++){
        int n,flag=0;
        cin>>n;
        string s;
        cin>>s;
        if(s.length()==1){
            cout<<"YES"<<endl;
        }
        else{        
            for(int i=1;i<s.length();i++){
                if(s[i]==s[0]){
                    s[i]='A';
                }
            }
            s[0]='A';

            for(int i=1;i<s.length();i++){
                if(s[i-1]=='A' && s[i]!='B' && s[i]!='A'){
                    for(int j=i+1;j<s.length();j++){
                        if(s[i]==s[j]){
                            s[j]='B';
                        }
                    }
                    s[i]='B';
                }
                else if(s[i-1]=='B' && s[i]!='B' && s[i]!='A'){
                    for(int j=i+1;j<s.length();j++){
                        if(s[i]==s[j]){
                            s[j]='A';
                        }
                    }
                    s[i]='A';
                }
            }
            //cout<<s<<endl;
            for(int i=0;i<s.length();i++){
                if(s[i]==s[i+1]){
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                cout<<"YES"<<endl;
            }
        }
    }
}

/*
8

7
abacaba
YES

2
aa
NO

1
y
YES

4
bkpt
YES

6
ninfia
NO

6
banana
YES

10 
codeforces
NO

8
testcase
NO
*/