#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);

    cout<<st.top()<<endl;
    //20

    st.pop();
    cout<<st.top()<<endl;
    //10

    if (st.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }


    st.size();          //If 2 elements in stack, Size=2
    st.emplace(100);    


    //Print Stack
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}