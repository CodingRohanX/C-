#include<iostream>
using namespace std;

int findmax(int a,int b,int c){
    int max;
    if(a>b){
        if(a>c){
            max=a;
        }
        else{
            max=c;
        }
    }
    else if(b>a){
        if(b>c){
            max=b;
        }
        else{
            max=c;
        }
    }
    return max;
}

int Triplet(int a,int b,int c){
    int num1,num2,flag;
    int max=findmax(a,b,c);
    if(max!=a){
        num1=a;
    }
    else{
        num1=b;
    }
    if(num1==a&&max!=b){
        num2=b;
    }
    else{
        num2=c;
    }
    int maxsq= max*max;
    int num1sq=num1*num1;
    int num2sq=num2*num2;
    int sum1=num1sq+num2sq;
    
    if(maxsq==sum1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a,b,c,flag;
    cin>>a>>b>>c;
    flag=Triplet(a,b,c);
    if(flag==1){
        cout<<"Triplet\n";
    }
    else{
        cout<<"Not Triplet\n";
    }
}

/*
13 12 5
Triplet
*/