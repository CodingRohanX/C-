#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int superDigit(string n1, int k,int &f) {
    int n = stoi(n1);
    if(k==1){
        return n;
    }
    // k = n1.size();
    if(n==0){
        return 0;
    }
    f += n%10;
    n=n/10;
    string s = to_string(n);
    superDigit(s,k,f);
    if(f>9){
        string s1 = to_string(f);
        f=0;
        superDigit(s1,k,f);
    }
    return f;
}

int main()
{ 
    string s = "9875";
    int k = 4;
    int f = 0;
    cout<<superDigit(s,k,f);
}