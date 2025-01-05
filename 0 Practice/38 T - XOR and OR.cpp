#include <iostream>
#include<string>
#include<vector>
using namespace std;

int bitwiseXOR(vector<int> nums, int n) {
    int result = nums[0];
    for (int i = 1; i < n; ++i) {
        result ^= nums[i];
    }
    return result;
}

int bitwiseOR(vector<int> nums, int n) {
    int result = nums[0];
    for (int i = 1; i < n; ++i) {
        result |= nums[i];
    }
    return result;
}

int main(){
    int n;
    string s,s1;
    cin>>s;
    cin>>s1;
    int len=s.length();
    vector<int> v(len);
    int x = stoi(s);
    for(int i=0;i<len;i++){
        n=x%10;
        v.push_back(n);
        x=x/10;
    }
    int xor1 = bitwiseXOR(v,len);
    int or1 = bitwiseXOR(v,len);
    
}