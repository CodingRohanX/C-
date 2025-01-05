#include<iostream>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
        int n,k,flag=0,min;
        cin>>n;
        cin>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[n];
        }
        for(int i=0;i<n;i++){
            if(a[i]>=k){
                min=(a[i]%k);
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]>=k){
                int l=a[i]%k;
                if(l<min){
                    min=l;
                }
            }
        }
        cout<<min<<endl;
        
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]<k){
                count++;
            }
        }
        if(count==k){
                cout<<-1<<endl;
            }
        }
	}