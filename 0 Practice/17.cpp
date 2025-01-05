#include <bits/stdc++.h>
#include<iostream>>
using namespace std;

int Sum(int num){
	int sum1=0;
	while(num>0){
		sum1+=num%10;
		num=num/10;
	}
	return sum1;
}

string smallestNumber(int n, int k) {
	int ini=pow(10,(n-1)),sum=0;
	while(sum!=k){
		if(Sum(ini)==k){
			stringstream ss;
			ss << ini;
			string str = ss.str();
			return str;
			break;
		}
		ini++;
	}
}

/* int smallestNumber(int n, int k) {
	int ini=pow(10,(n-1)),sum=0;
	while(sum!=k){
		if(Sum(ini)==k){
			return ini;
			break;
		}
		ini++;
	}
} */

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<smallestNumber(n,k)<<endl;
    }
}