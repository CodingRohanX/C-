#include<iostream>
#include<string>
#include<vector>
using namespace std;
// Incomeplete
vector<string> findRepeatedDnaSequences(string s){
    vector<string> a;
    string t2;
    for(int j=0;j<s.size()-18;j++){
        string t1 = s.substr(j, j + 10);
        for (int i = j + 10; i < s.size() - 8; i++){
            string t2 = s.substr(i, i + 10);
            if(t2.compare(t1)==0){
                a.push_back(t1);
                break;
            }
        }
    }
    return a;
}

int main(){
    // string t1 = s.substr(0, 10);
    vector<string> ans;
    string str = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    cout<<str.size();
    /* ans = findRepeatedDnaSequences(str);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    } */
}