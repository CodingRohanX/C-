#include<iostream>
#include<string>
#include<vector>
#include<map>
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
    string S;
    cin>>S;
    int n=S.length(),count=0,max=0,k=0;
    vector<char> a={};
	int i=0;
    while(i!=n){
        if(check(a,S[i])){
            a.clear();
            k++;			
            i=k;
            if(count>max){
                max=count;
            }
            count=0;
        }
        else{
            a.push_back(S[i]);
            count++;
            if(count>max){
                max=count;
            }
			i++;
        }

    }
    cout<<max<<endl;
}

/*
vrevwazvweewvewvwe
6
*/



// More Optimezed using Map & 2 Pointer Method
int longestUniqueSubstr(string &s){
    map<char,int> m;
    int c=0,mx=0;
    int p1=0,p2=0;
    while(p2<s.size()){
        m[s[p2]]++;
        if(m[s[p2]]>1){
            mx=max(c,mx);
            //c=0
            while(m[s[p2]]>1){
                m[s[p1]]--;
                p1++;
                c--;
            }
        }
        p2++;
        c++;
    }
    mx=max(mx,c);
    return mx;
}