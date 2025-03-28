#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag1=0,flag2=0,flag3=0,flag4=1;
        cin>>n;
        string s;
        cin>>s;
        //if(n>=4){
            for(int i=0;i<s.length();i++){
                if(((s[i]=='M' || s[i]=='m') && (s[i+1]!='M' || s[i+1]!='m')) || ((s[i]=='M' || s[i]=='m') && (s[i+1]!='E' || s[i+1]!='e'))){
                    break;
                }

                if((s[i]=='M' || s[i]=='m') && (s[i+1]=='E' || s[i+1]=='e')){
                    flag1=1;
                }


                if(((s[i]=='E' || s[i]=='e') && (s[i+1]!='E' || s[i+1]!='e')) || ((s[i]=='E' || s[i]=='e') && (s[i+1]!='O' || s[i+1]!='o'))){
                    break;
                }
                
                if((s[i]=='E' || s[i]=='e') && (s[i+1]=='O' || s[i+1]=='o')){
                    flag2=1;
                }


                if(((s[i]=='O' || s[i]=='o') && (s[i+1]!='O' || s[i+1]!='o')) || ((s[i]=='O' || s[i]=='o') && (s[i+1]!='W' || s[i+1]!='w'))){
                    break;
                }

                if((s[i]=='O' || s[i]=='o') && (s[i+1]=='W' || s[i+1]=='w')){
                    flag3=1;
                }

                /* if(s[i]=='M' || s[i]=='E' || s[i]=='O' || s[i]=='W' || s[i]=='m' || s[i]=='e' || s[i]=='o' || s[i]=='w'){
                    continue;
                }
                else{
                    flag4=0;
                    break;
                } */
            }
            cout<<flag1<<endl;
            cout<<flag2<<endl;
            cout<<flag3<<endl;
            if(flag1==1 && flag2==1 && flag3==1 /* && flag4==1 */){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        //}
    }
}