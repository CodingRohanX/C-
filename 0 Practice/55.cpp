#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertHeap(vector<int> &v, int val){           // Insertion '0' based index;
    v.push_back(val);
    int index = v.size() - 1;
    while (index > 0){
        int parent = (index - 1) / 2;
        if (v[parent] < v[index]){
            swap(v[parent], v[index]);
            index = parent;
        }
        else{
            return;
        }
    }
}

/* vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m){
    vector<int> ans;
    vector<int> v;
    for(int i=0;i<n;i++){
        insertHeap(v,a[i]);
    }
    for(int i=0;i<m;i++){
        insertHeap(v,b[i]);
    }
    return v;
} */

int main(){
    vector<int> a = {10,5,6,2};
    vector<int> b = {12,7,9};
    int n=a.size();
    int m=b.size();
    vector<int> v;
    for (int i = 0; i < n; i++){
        insertHeap(v, a[i]);
    }
    for (int i = 0; i < m; i++){
        insertHeap(v, b[i]);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}