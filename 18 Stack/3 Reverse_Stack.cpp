#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int elm){
    if(st.empty()){
        st.push(elm);
        return;
    }

    int topelm=st.top();
    st.pop();
    insertAtBottom(st,elm);
    st.push(topelm);
}

void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }

    int elm=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,elm);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse(st);
    while(!st.empty()){             //to Print the stack
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}

/*
4 3 2 1         //Original Stack        4 is tos & 1 is at bottom
1 2 3 4

*/