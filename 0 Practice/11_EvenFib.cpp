#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long int
using namespace std;

/* int main(){
    int t;
    cin>>t;
    while(t--){
        long n,sum=2,i;
        //int i;
        cin>>n;
        long fib[n];
        fib[0]=1,fib[1]=2;
        

        for(i=2;i<n;i++){
            fib[i]=fib[i-1]+fib[i-2];
            if(fib[i]>=n){
                break;
            }
            //cout<<fib[i]<<endl;
            else if(fib[i]%2==0){
                sum=sum+fib[i];
                //cout<<"sum: "<<sum<<endl;
            }
        }
        cout<<sum<<endl;
    }
} */



vector<int> fib(int n) {
    vector<int> fi = {2};
    int t1 = 1;
    int t2 = 2;
    
    while (true) {
        int t3 = t1 + t2;
        if (t3 >= n) {
            break;
        }
        if (t3 % 2 == 0) {
            fi.push_back(t3);
        }
        t1 = t2;
        t2 = t3;
    }
    return fi;
}

int main() {
    int n;
    cin>>n;
    vector<int> fibonacci = fib(100);
    int sum = 0;
    for (int num : fibonacci) {
        sum += num;
    }
    cout << sum << endl;
    return 0;
}
