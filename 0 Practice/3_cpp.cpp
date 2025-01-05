#include<iostream>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
        int n,min=0,a;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++){
        cin>>arr[i];
        }

        min=arr[0];

        for(int i=0;i<n;i++){
            if(min>arr[i] && arr[i]>0){
                min=arr[i];
                for(int j=0;j<n;j++){
                    if(arr[j]<(-(min))){
                        int a=arr[i];
                        break;
                    }
                }
            }
        }


        cout<<a<<endl;
        cout<<min<<endl;
	}
}