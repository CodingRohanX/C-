#include <iostream>
#include <vector>
#include <numeric>  // For std::gcd and std::accumulate

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findGCD(const vector<int>& arr) {
    int result = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        result = gcd(result, arr[i]);
    }
    return result;
}

bool canMakeEqual(const vector<int>& arr) {
    int arrayGCD = findGCD(arr);
    return arrayGCD > 1;
}

int main() {
    /* int t;
	cin>>t;
	while(t--){
        int n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(canMakeEqual(v)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        //cout<<pCheck(v)<<endl;
    } */
    vector<int> arr1 = {1,1,1};
    cout << (canMakeEqual(arr1) ? "True" : "False") << endl;  // Output: True

    vector<int> arr2 = {1, 0, 0};
    cout << (canMakeEqual(arr2) ? "True" : "False") << endl;  // Output: True

    vector<int> arr3 = {1,2};
    cout << (canMakeEqual(arr3) ? "True" : "False") << endl;  // Output: False

    return 0;
}
