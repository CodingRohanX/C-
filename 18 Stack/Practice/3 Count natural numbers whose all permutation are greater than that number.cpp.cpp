#include<iostream>
#include<queue>
#include<string>
using namespace std;

bool checkNo(string s1,int n1){
	int n2=stoi(s1);
	if(n2>=n1){
		return 1;
	}
	return 0;
}

int main(){
	int m;
	cin>>m;
	int Fcount=0;
	for(int j=1;j<=m;j++){
		string s=to_string(j);
		string s1;
		int n1=stoi(s);
		int ptr=0,n=s.length(),i,count=0,flag=0,flagA=0;
		for(ptr=1;ptr<n;ptr++){
				for(i=ptr;i<n;i++){
					if(count==n){
						if(checkNo(s1,n1)){
							count=0;
							break;
						}
						else{
							flag=1;
							break;
						}
					}
					count++;
					s1=s1+s[i];
					if(i==(n-1)){
						i=-1;
					}
				}
			s1="";
			if(flag==1){
				break;
			}
		}
		if(flag==1){
		}
		else{
			Fcount++;
		}
	}
	cout<<Fcount<<endl;
}