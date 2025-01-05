#include<iostream>
using namespace std;

bool isPresent(char ch,int lenj,string s){
    for(int j=0;j<lenj;j++){
        if(ch==s[j]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int count=0;
        string j,s;
        cin>>j;
        cin>>s;
        int lenj=j.length();
        int lens=s.length();
        for(int i=0;i<lens;i++){
            if(isPresent(s[i],lenj,j)){
                count++;
            }
        }
        cout<<count<<endl;
    }
}