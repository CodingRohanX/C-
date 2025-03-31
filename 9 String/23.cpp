#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

bool check(vector<char> v, char c){
    if(find(v.begin(), v.end(), c) != v.end()) {
        return 1;
    }
    return 0;
}

void del(vector<char> &v,char c){
    for(int i=1;i<=v.size();i++){
        if(v[i]==c){
            v.erase(v.begin(),v.begin()+i);
            break;
        }
    }
}

int lengthOfLongestSubstring(string s) {
    if(s.size()==0){
        return 0;
    }
    if(s.size()==1){
        return 1;
    }
    vector<char> v = {s[0]};
    int p1 = 0;
    int p2 = 1;
    int max = -1;
    while(p2<s.size()){
        if(check(v,s[p2])){
            int num = p2-p1;
            if(max<num){
                max=num;
            }
            del(v,s[p2]);
            // string s = "abcdebfgh";
            //v.clear();
            p1=p2-1;
            while(s[p1]!=s[p2]){
                p1--;
            }
            p1++;
            v.push_back(s[p2]);
            p2=p1+1;
        }
        else{
            v.push_back(s[p2]);
            p2++;
        }
    }
    int num = p2-p1;
    if(max<num){
        max=num;
    }
    return max;
}

int main(){
    string s = "abcdebfgh";
    cout<<lengthOfLongestSubstring(s);
}