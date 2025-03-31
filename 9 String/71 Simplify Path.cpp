#include <iostream>
#include <string>
#include <queue>

using namespace std;

string simplifyPath(string p) {
    deque<string> dq;
    string s;
    int p1=0,p2=1,n=p.size();
    while(p2<=n){
        if(p[p2]=='/' || p2==n) {
            s=p.substr(p1+1,p2-p1-1);
            if(s==".") s="";
            else if(s==".."){
                if(dq.size()) dq.pop_back();
                s="";
            }
            if(s.size()) dq.push_back(s);
            p1=p2;
        }
        p2++;
    }
    string a="";
    while(dq.size()){
        a=a+"/"+dq.front();
        dq.pop_front();
    }
    if(!a.size()) a="/";
    return a;
}

int main(){
    string h = "/.../a/../b/c/../d/./";
    cout<<simplifyPath(h);
}