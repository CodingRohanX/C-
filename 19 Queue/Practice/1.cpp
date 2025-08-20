#include<iostream>
#include<queue>
using namespace std;

int main(){
    string s="aabb";
    cin>>s;
    queue<int> q;
    q.push(s[0]);
    int n=s.length();
    for(int i=1;i<n;i++){
        if(q.front()==s[i]){
            q.pop();
            if(q.empty()){
                cout<<"-1"<<endl;
            }
        }
        else{
            cout<<q.front()<<endl;
            q.push(s[i]);
        }
    }
}