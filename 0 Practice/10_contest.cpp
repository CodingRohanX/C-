#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
        ll n,p,forLoop2=0,forloop1=0;
        cin>>n;

        for(int i=2;i<=n;i++){
            int flag=0;
            //int forLoop2=0;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
                //forLoop2++;
            }
            if(flag==0 && n%i==0){
                p=i;
            }
            //forloop1++;
        }
        cout<<p<<endl;
        //cout<<forLoop2<<endl;
        //cout<<forloop1<<"\n"<<endl;
    }
}

/*
3
11      Input
21
50

11
7       O/P
5
*/