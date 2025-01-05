#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
        long long h,x,y1,y2,k,countLazer=0,countX=0,i;
        cin>>h>>x>>y1>>y2>>k;
        long long Health=h;
        for(i=0;h>0;i++){
            h=h-x;
            countX++;
        }
        for(i=0;Health>0;i++){
            if(k==0){
                break;
            }
            Health=Health-y1;
            k--;
            countLazer++;
        }
        for(i=0;Health>0;i++){
            Health=Health-y2;
            countLazer++;
        }

        if(countLazer<countX){
            cout<<countLazer<<endl;
        }
        else if(countX<countLazer){
            cout<<countX<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    
}