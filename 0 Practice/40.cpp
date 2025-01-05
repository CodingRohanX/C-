#include<iostream>
#include<vector>
#include <numeric>
#include <cmath>
using namespace std;

int main(){
    int t=1;
    while(t!=0){
        int n;
        double sum=0,varience,num;
        cin>>n;
        if(n==0){
            break;
        }
        vector<double> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        double mean = accumulate(a.begin(), a.end(), 0.0) / a.size();
        for(int i=0;i<n;i++){
            num=a[i]-mean;
            num=num*num;
            sum=sum+num;
        }
        varience=sum/n;
        double ans= sqrt(varience);
        cout<< ans << endl;
    }
}