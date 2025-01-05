#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long a[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        reverse(a, a + n);
        for(int i=0;i<n;i=i+2){
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
}

/*
reverse(arr, arr + n);
*/
