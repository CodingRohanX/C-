#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
        int n,ptr1=0,ptr2=2,flag=0,flag1=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){     //Take in exactly like a array.
            cin>>a[i];
        }cout<<endl;
        /* for(int i=0;i<n;i++){
            cout<<a[n]<<" ";
        } */
        if(n==2){
            if(a[0]<=a[1]){
                cout<<"HELL-YES"<<endl;
                cout<<a[0]<<" "<<a[1]<<endl;
                //flag1=1;
            }
            else if(a[0]>=a[1]){
                cout<<"HELL-NO"<<endl;
                cout<<a[0]<<" "<<a[1]<<endl;
                //flag1=1;
            }
        }
        else if(n>=3){
            vector<int> b(n);
            for(int i=0;i<n;i++){
                b[n]==a[n];
            }
            
            sort(b.begin(), b.end());
            
            for(int i=0;i<n;i++){
                ptr2=ptr1+2;
                for(int j=0;j<n;j++){
                    if(a[ptr1]<a[ptr2]){
                        a[ptr1]=a[ptr1]+a[ptr2];
                        a[ptr2]=a[ptr1]-a[ptr2];
                        a[ptr1]=a[ptr1]-a[ptr2];
                        break;
                    }ptr2++;
                }
                ptr1++;
            }
            if(b==a){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        /* for(int i=0;i<n;i++){
            if(b[n]!=a[n]){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        } */       
	}
}

/*
3 2 6 1 8 9
1 2 6 3 8 9
1 2 6 3 8 9

5 8 9 1 6 8
1 8 9 5 6 8
1 5 9 8 6 8
1 5 6 8 9 8

5 1 3 7 9 2 1
3 1 5 7 9 2 1
3 1 5 7     

1 3 5 7

8 3 1 9 7
1 3 8 9 7
1 3 7 9 8

0 3 6 9 12

1 4 7 10 13 16
*/