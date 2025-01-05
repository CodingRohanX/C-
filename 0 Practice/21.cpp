#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,A3,A5,A15/* ,N3,N5 */;
        cin>>n;
        //n=n-1;
        if(n%3==0){
            A3=n-3;
        }
        if(n%3==1){
            A3=n-1;
        }
        if(n%3==2){
            A3=n-2;
        }
        if(n%5==0){
            A5=n-5;
        }
        if(n%5==1){
            A5=n-1;
        }
        if(n%5==2){
            A5=n-2;
        }
        if(n%5==3){
            A5=n-3;
        }
        if(n%5==4){
            A5=n-4;
        }
        if(n%15==0){
            A15=n-15;
        }
        if(n%15==1){
            A15=n-1;
        }
        if(n%15==2){
            A15=n-2;
        }
        if(n%15==3){
            A15=n-3;
        }
        if(n%15==4){
            A15=n-4;
        }
        if(n%15==5){
            A15=n-5;
        }
        if(n%15==6){
            A15=n-6;
        }
        if(n%15==7){
            A15=n-7;
        }
        if(n%15==8){
            A15=n-8;
        }
        if(n%15==9){
            A15=n-9;
        }
        if(n%15==10){
            A15=n-10;
        }
        if(n%15==11){
            A15=n-11;
        }
        if(n%15==12){
            A15=n-12;
        }
        if(n%15==13){
            A15=n-13;
        }
        if(n%15==14){
            A15=n-14;
        }


        //cout<<"A15="<<A15<<endl;
        float N3=A3/3;
        float N5=A5/5;
        float N15=A15/15;
        float NN= N15/2;
        //cout<<"NN="<<NN<<endl;
        float sum3=(N3/2)*(3+A3);
        float sum5=(N5/2)*(5+A5);
        float sum15=(N15/2)*(15+A15);
        /* cout<<sum3<<endl;
        cout<<sum5<<endl;
        cout<<sum15<<endl; */
        cout<<sum3+sum5-sum15<<endl;
        //cout<<sum15<<endl;
    }
}

/*
11
31
100
99
101
45
*/