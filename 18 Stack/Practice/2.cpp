#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

bool yo(string S,int i){
    if(S[i]=='(' && S[i+1]==')'){
        return 1;
    }
    return 0;
}

int main(){
    int flag=0,max=0;
    string S;
    cin>>S;
    int n=S.length(),count=0;
    stack<char> st;
    for(int i=0;i<n;i++){
        cout<<i<<endl;
        if(yo(S,i)){
            count++;
            flag=1;
        }
        else if(flag==1 && yo(S,i)){
            count++;
            if(max<count){
                max=count;
            }
        }
        else if(flag==1 && yo(S,i)==0){
            count=0;
            if(max<count){
                max=count;
            }
        }
        /* if(S[i]=='('){
            st.push(S[i]);
        }
        else if(S[i]==')' && st.top()=='(' && st.empty()==0){
            count++;
            st.pop();
            flag=1;
        } */
    }
    cout<<count*2<<endl;
}