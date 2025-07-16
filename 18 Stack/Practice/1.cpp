#include<iostream>
#include<algorithm>
#include<stack>
#include <deque>
using namespace std;

int middleNo(stack<int>& st1){
    int n=st1.size();
    if(n%2==0){
        for(int i=0;i<((n/2)-1);i++){
            st1.pop();
        }
    }
    else{
        for(int i=0;i<n/2;i++){
            st1.pop();
        }
    }
    //cout<<st1.top()<<endl;
    return st1.top();
}

stack<int> deleteMiddle(stack<int>& st1){
    int n=st1.size();
    deque<int> dq;
    if(n%2==0){
        for(int i=0;i<((n/2)-1);i++){
            dq.push_back(st1.top());
            st1.pop();
        }
    }
    else{
        for(int i=0;i<n/2;i++){
            dq.push_back(st1.top());
            st1.pop();
        }
    }
    st1.pop();
    while(!dq.empty()){
        st1.push(dq.back());
        dq.pop_back();
    }
    return st1;
}

int main(){
    stack<int> st;
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        st.push(num);
    }

    stack<int> st2=deleteMiddle(st);

    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }

    //cout<<middleNo(st)<<endl;
    
}


/*
Middle Element Print

5
1 2 3 4 5

3

Middle Element

6
1 2 3 4 5 6

4


Middle element pop

6
1 2 3 4 5 6

6 5 3 2 1

5
1 2 3 4 5

5 4 2 1
*/