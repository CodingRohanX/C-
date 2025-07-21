#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s){
    stack<string> st;                //Made a stack of type string using "#include<stack>"

    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word=word+s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){             //to Print the stack
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}

int main(){
    string s="Hey, bro how are you?";
    reverseSentence(s);
}

/*
you? are how bro Hey, 
*/