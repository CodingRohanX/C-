#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int maxElem(queue<int> q1){
    int max=q1.front();
    while(!q1.empty()){
        if(max<q1.front()){
            max=q1.front();
        }
        q1.pop();
    }
    return max;
}

void printB(vector<int> b){
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}

int main() {
	int n,num;
	cin >> n;    //Reading input from STDIN
	vector<int> a;
	vector<int> b;
	queue<int> q;
    for(int i=0;i<n;i++){
        cin>>num;
        a.push_back(num);
    }

    for(int i=0;i<n;i++){
        q.push(a[i]);
    }

    while(!q.empty()){
        if(q.front()!=maxElem(q)){
            b.push_back(q.front());
            q.pop();
            cout<<" "<<endl;
        }
        else if(q.front()==maxElem(q)){
            b.push_back(q.front());
            q.pop();
            printB(b);
            b.clear();
        }
    }
}