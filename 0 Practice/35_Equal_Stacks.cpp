#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int sum1(stack<int> st){
    int sum=0;
    while(!st.empty()){
        sum=sum+st.top();
        st.pop();
    }
    return sum;
}

int main(){
    int n1,n2,n3,flag=0;
    cin>>n1>>n2>>n3;
    stack<int> st1;
    stack<int> st2;
    stack<int> st3;
    int a1[n1],a2[n2],a3[n3];
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    reverse(a1,a1+n1);
    for(int i=0;i<n1;i++){
        st1.push(a1[i]);
    }

    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    reverse(a2,a2+n2);
    for(int i=0;i<n2;i++){
        st2.push(a2[i]);
    }

    for(int i=0;i<n3;i++){
        cin>>a3[i];
    }
    reverse(a3,a3+n3);
    for(int i=0;i<n3;i++){
        st3.push(a3[i]);
    }
    //cout<<sum1(st2);
    for(int i=0;i<n1;i++){
        if(sum1(st1)==sum1(st2) && sum1(st2)==sum1(st3)){
            cout<<sum1(st1)<<endl;
            break;
        }
        else{
            st1.pop();
            for(int i=0;i<n2;i++){
                if(sum1(st1)==sum1(st2) && flag==0){
                    for(int i=0;i<n3;i++){
                        if(sum1(st3)<sum1(st2)){
                            break;
                        }
                        else if(sum1(st3)>sum1(st2)){
                            st3.pop();
                        }
                        else{
                            //cout<<"its me ! "<<sum1(st3)<<endl;
                            flag=1;
                        }
                    }
                }
                else if(flag==0){
                    if(sum1(st1)>sum1(st2)){
                        break;
                    }
                    else if(flag==0){
                        st2.pop();
                    }
                }
            }
        }
    }
}