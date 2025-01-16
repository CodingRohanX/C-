#include<iostream>
using namespace std;

int main(){
    int n,i,j,pointer,max=0,biggest,count,index;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            pointer=arr[i];
            if(arr[j]==pointer){
                count++;
                //cout<<count<<endl;
            }
        }
        if(max<count){
            max=count;
            index=i;
        }
    }
    cout<<index<<endl;
}

/*
6
1 6 4 5 1 1 
0               //Index of no. which is repeting

7
1 5 3 4 3 5 6
1               //Index of no. which is repeting
*/