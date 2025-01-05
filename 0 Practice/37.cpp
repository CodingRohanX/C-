#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,num,sum1=0,sum2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        //cout<<s2.compare(s1)<<endl;
        num=s2.compare(s1);
        if(num>0){
            sum1=sum1+3;
        }
        else if(num==0){
            sum1+=1;
            sum2+=1;
        }
        else{
            sum2=sum2+3;
        }
    }
    cout<<sum2<<" "<<sum1<<endl;
}