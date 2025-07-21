#include<iostream>
using namespace std;
#define n 100           //publically defined n=100

class Stack{
    int* arr;
    int top;

    public:
    Stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }

    void display(){
        if(top==-1){
            cout<<"Stack Empty"<<endl;
        }
        else{
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<endl;
            }cout<<endl;
        }
    }
};

int main(){
    Stack st;           //Stack Class
    st.push(1);
    st.push(2);
    st.push(3);
    st.display();       //1 2 3
    st.pop();
    st.display();       //1 2
    st.pop();
    st.pop();
    st.display();       //Stack Empty
}

/*
3
2               Stack form
1

2
1

Stack Empty
*/