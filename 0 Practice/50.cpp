#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        long min=1000000;
        vector<long long> final;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j] && arr[j]<min){
                    min=arr[j];
                }
            }final.push_back(min);
            //break;
            //final.push_back(min);
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i: res) cout << i << " ";
        cout<<endl;
    }
    return 0;
}