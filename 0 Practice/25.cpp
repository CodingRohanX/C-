#include<iostream>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        if(n%2==1){
            int max= n/2+1;
            cout<<(n/2+1)<<" ";
            cout<<n-max<<endl;
        }
        else{
            cout<<n/2<<" "<<n/3<<endl;
        }
	}
}

/*
3->2
5->3
7->4
9->5

6->2
8->3
*/