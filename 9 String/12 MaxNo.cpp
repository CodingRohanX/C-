#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "1585769";
    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;
}

/*
9876551     //Greatest No. that could be formed from the given No.
*/