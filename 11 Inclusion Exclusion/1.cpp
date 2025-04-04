#include<iostream>
using namespace std;

int main(){
    int i,countDiv5=0,countDiv7=0,Total;
    for(i=1;i<=1000;i++){
        if(i%5==0){
            countDiv5++;
        }
        else if(i%7==0){
            countDiv7++;
        }
    }
    Total=countDiv5+countDiv7;
    cout<<Total<<endl;
}

/*
314
*/




/*  Rough Work
        5       7 
        10      14      
        15      21
        20      28
        25     *35*
        30      42
        35      49
        40      56
        45      63
        50     *70*
*/