#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n-1;i++){
            if(i>=s.size()-1){
                break;
            }
            if(s[i]!=s[i+1] && flag==0){
                flag=1;
                s.erase(i,2);
                i=0;
            }
            else if (s[i] != s[i + 1] && flag == 1){
                flag = 0;
                s.erase(i, 2);
                i = 0;
            }
        }
        if(flag == 0){
            cout << "Ramos" << endl;
        }
        else{
            cout << "Zlatan" << endl;
        }
    }
}