#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main(){
    int n1,n2,n3,num,sum1=0,sum2=0,sum3=0;
    cin>>n1>>n2>>n3;
    stack<int> st1;
    stack<int> st2;
    stack<int> st3;

    int a1[n1],a2[n2],a3[n3];
    for(int i=0;i<n1;i++){
        cin>>a1[i];
        sum1+=a1[i];
    }
    reverse(a1,a1+n1);
    for(int i=0;i<n1;i++){
        st1.push(a1[i]);
    }

    for(int i=0;i<n2;i++){
        cin>>a2[i];
        sum2+=a2[i];
    }
    reverse(a2,a2+n2);
    for(int i=0;i<n2;i++){
        st2.push(a2[i]);
    }

    for(int i=0;i<n3;i++){
        cin>>a3[i];
        sum3+=a3[i];
    }
    reverse(a3,a3+n3);
    for(int i=0;i<n3;i++){
        st3.push(a3[i]);
    }
    
    while(1){
        if(sum1==sum2 && sum2==sum3){
            break;
        }
        if(sum1>sum2){
            if(sum1>sum3){
                sum1=sum1-st1.top();
                st1.pop();
            }
            else{
                sum3=sum3-st3.top();
                st3.pop();
            }
        }
        else{
            if(sum2>sum3){
                sum2=sum2-st2.top();
                st2.pop();
            }
            else{
                sum3=sum3-st3.top();
                st3.pop();
            }
        }
    }
    cout<<sum1<<endl;
}

/*
5 3 4
3 2 1 1 1
4 3 2
1 1 4 1

5
*/