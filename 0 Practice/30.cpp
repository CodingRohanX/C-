#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);


// Contributed By: Pranay Bansal

// } Driver Code Ends


bool isPresent(vector<char> arr,char ch,int len){
    for(int i=0;i<len;i++){
        if(ch==arr[i]){
            return 1;
        }
    }
    return 0;
}

int longestSubstrDistinctChars (string S)
{
    int count=1,max=0;
    int len=S.length();
    vector<char> a(len);

    a[0]=S[0];
    
    for(int i=1;i<len;i++){
        if(isPresent(a,S[i],len)){
            if(max<count){
                max=count;
            }
            count=1;
            a[len]={S[i]};
        }
        else{
            count++;
            a.push_back(S[i]);
            //a[i]=S[i];
        }
    }

    return max;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}