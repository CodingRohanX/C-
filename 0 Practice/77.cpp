#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(vector<int> temp,vector<vector<int>> final){
    for (const auto& row : final) {
        if (row == temp) {
            return true;
        }
    }
    return false;
}

vector<vector<int>> threeSum(vector<int> &nums){
    sort(nums.begin(), nums.end());
    vector<vector<int>> final;
    vector<int> temp;
    int p1 = 0;
    int p2 = p1 + 1;
    int p3 = 1;
    while(p3<=nums.size() && nums[p3]<=0){
        p3++;
    }
    if(nums[p1]>=0 || p3==nums.size()){
        /* while(nums[p1]!=0 && p1<=nums.size()){
            p1++;
        } */
        if(nums[p1]==0 && nums[p1+1]==0 && nums[p1+2]==0){
            final.push_back({0,0,0});
            return final;
        }
        else{
            return final;
        }
    }
    while(nums[p1]<0){
        for(int i=p1+1; i<nums.size()-1;i++){
            for(int j=max(p3, i+1);j<nums.size();j++){
                if(nums[p1]+nums[i]+nums[j]==0){
                    temp.push_back(nums[p1]);
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    if(check(temp,final)==0){
                        final.push_back(temp);
                    }
                    temp.clear();
                    //final.push_back({nums[p1],nums[i],nums[j]});
                }
            }
        }
        p1++;
    }
    return final;
}

int main(){
    vector<int> nums = {0,0,0,0};
    sort(nums.begin(), nums.end());
    /* for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }cout<<endl; */
    vector<vector<int>> ans = threeSum(nums);
    //cout<<"length="<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
}