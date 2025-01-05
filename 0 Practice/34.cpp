#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool check(char ch,vector<char> c){
    for(int i=0;i<c.size();i++){
        if(ch==c[i]){
            return 1;
        }
    }
    return 0;
}

/* int main(){
    int count=1,max=0;
    string S;
    cin>>S;
} */

int main(){
    int count=1,max=0,m=0,i=1;
    string S;
    cin>>S;
    //getline(cin,s);
    //cout<<s;
    vector<char> c;
    c.push_back(S[0]);
    while(m!=S.size()){
        //cout<<"Ha ghusa hu loop mai"<<endl;
        if(check(S[i],c)){
            //cout<<"YES"<<endl;
            if(count>max){
                max=count;
                for(int j=0;j<c.size();j++){
                    cout<<c[j];
                }cout<<endl;
            }
            m++;
            i=m;
            c.clear();
            c.push_back(S[i]);
            count=1;
        }
        else{
            //cout<<"NO"<<endl;
            count++;
            c.push_back(S[i]);
            i++;
        }
    }
    /* for(int i=1;i<S.size();i++){
        //cout<<"Ha ghusa hu loop mai"<<endl;
        if(check(S[i],c)){
            //cout<<"YES"<<endl;
            if(count>=max){
                max=count;
                for(int j=0;j<c.size();j++){
                    cout<<c[j];
                }cout<<endl;
            }
            c.clear();
            c.push_back(S[i]);
            count=1;
            m++;
            i=m;
        }
        else{
            //cout<<"NO"<<endl;
            count++;
            c.push_back(S[i]);
        }
    } */
    cout<<max<<endl;
}

/*
pwwkew  
3
*/