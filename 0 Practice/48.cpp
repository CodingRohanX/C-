#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool check(vector<char> a,char ch){
    int m=a.size();
    for(int i=0;i<m;i++){
        if(a[i]==ch){
            return 1;
        }
    }
    return 0;
}

int main(){
    string s;
    cin>>s;
    int n=s.length(),count=0,max=0,k=0;
    vector<char> a(n);
    for(int i=0;i<n;i++){
        if(check(a,s[i])){
            a.clear();
            k++;
            i=k;
            if(count>max){
                max=count;
            }
            count=0;
        }
        else{
            a.push_back(s[i]);
            count++;
        }
    }
    cout<<max<<endl;
}