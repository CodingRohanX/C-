#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
    vector<long long int> productExceptSelf(vector<long long int> &nums, int n){
        vector<long long int> a;
        long long f = 1;
        for (long long i = 0; i < n; i++)
        {
            f = f * nums[i];
        }
        if (f == 0)
        {
            sort(nums.begin(), nums.end());
            return nums;
        }
        for (long long i = 0; i < n; i++)
        {
            a.push_back(f / a[i]);
        }
        return a;
    }
};

int main(){
    int N;
    cin>>N;
    cout << countSquares(N)<<endl;
}