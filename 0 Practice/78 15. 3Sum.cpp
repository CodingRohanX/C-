#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void add0(vector<int> nums,vector<vector<int>> &final, int size){
    int p=0;
    while(p<size && nums[p]!=0){
        p++;
    }
    if(p<size-2 && nums[p]==0 && nums[p+1]==0 && nums[p+2]==0){
        final.push_back({0,0,0});
    }
}

vector<vector<int>> threeSum(vector<int> &nums){
    vector<vector<int>> final;
    int size = nums.size();
    sort(nums.begin(), nums.end());
    int p1 = 0;
    int p2 = p1 + 1;
    int p3 = size - 1;
    if(nums[p1]>=0 || nums[p3]<=0){
        add0(nums,final,size);
        return final;
    }
    int sum = 0;
    while (nums[p1] < 0){
        p2 = p1 + 1;
        p3 = size - 1;
        while(p2<p3){
            sum = nums[p1] + nums[p2] + nums[p3];
            if(sum>0){
                p3--;
            }
            else if(sum<0){
                p2++;
            }
            else{
                final.push_back({nums[p1],nums[p2],nums[p3]});
                p2++;
                while(nums[p2-1]==nums[p2] && p2<p3){
                    p2++;
                }
                /*p3--;
                p2++; */
            }
        }
        if(nums[p1]==nums[p1+1]){
            int p11 = p1;
            while(nums[p1]==nums[p11]){
                p1++;
            }
        }
        else{
            p1++;
        }
    }
    add0(nums,final,size);
    return final;
}

int main(){
    vector<int> nums = {-2,0,0,2,2};
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