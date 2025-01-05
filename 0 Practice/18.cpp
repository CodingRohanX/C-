#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;
    
    for(int i = 0; i < n - 2; i++) {
        int j = i + 1;
        int k = n - 1;
        
        while(j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            
            if(sum == K) {
                result.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            } else if(sum < K) {
                j++;
            } else {
                k--;
            }
        }
    }
    if(sum == K) {
    return result;
    }
    else{
        return -1;
    }
}

int main() {
    vector<int> arr = {10, 5, 5, 5, 2};
    int n = arr.size();
    int K = 12;
    vector<vector<int>> triplets = findTriplets(arr, n, K);
    
    for(auto &triplet : triplets) {
        cout << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "\n";
    }
    
    return 0;
}
