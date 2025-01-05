#include<iostream>
#include<string>
using namespace std;

int Substring(string s)
{

    int ans = 1, temp = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            ++temp;
        }
        else {
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
    return ans;
}

int main(){
    int t;
	cin>>t;
	while(t--){
        int n,q;
        cin>>n;
        cin>>q;
        string str,str1;
        getline(cin,str);
        //string s = "abcdddddeff";
        //cout << Substring(str)<<" ";
        for(int i=0;i<q+1;i++){
            getline(cin,str1);
            str.append(str1);
            cout << Substring(str)<<" ";
        }
        cout<<endl;
	}
}


/*
*/