#include<bits/stdc++.h>
#include<vector>
using namespace std;

/*
0 1 1 0
0 0 0 1
1 1 0 1
1 1 1 0

0 1 0
1 0 0
0 1 0
*/

class Solution 
{
    public:

    int check(vector<vector<int> >& M, int n,int i){
        for(int j=0;j<n;j++){
            if((M[j][i])==1){
                return 1;
            }
        }
        return 0;
    }

    int celebrity(vector<vector<int> >& M, int n) {
        int final,flag=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(M[i][j]==1){
                    if(check(M,n,i)){
                        continue;
                    }
                    else{
                        cout<<"i: "<<i<<"j: ";
                        return j;
                    }
                }
            }
        }
        if(flag==0){
            return -1;
        }
    }
};

int main()
{
/* int t;
cin>>t;
while(t--)
{ */
int n;
cin>>n;
vector<vector<int> > M(n, vector<int> (n, 0));
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cin>>M[i][j];
}
}
Solution ob;
cout<<ob.celebrity(M,n)<<endl;
}
//}