#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n){
    int ptr1 = 0;
    int ptr2 = ptr1 + 1;
    int flag = 0;
    vector<long long> ans;
    for (int ptr1 = 0; ptr1 < n-1; ptr1++){
        flag = 0;
        for (int ptr2 = ptr1 + 1; ptr2 < n; ptr2++){
            if (arr[ptr2] > arr[ptr1]){
                ans.push_back(arr[ptr2]);
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            ans.push_back(-1);
        }
    }
    ans.push_back(-1);
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    vector<long long> ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ans = nextLargerElement(arr,n);
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}